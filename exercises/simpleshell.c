#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

void _printenv(void)
{
	extern char **environ;
	int i;

	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);
}

char *pathfinder(char *str)
{
	char *path = getenv("PATH");
	char *token = strtok(path, ":"), *dup = NULL;
	struct stat st;
	while (token)
	{
		dup = strdup(token);
		dup = realloc(dup, strlen(dup) + 2);
		strcat(dup, "/");
		dup = realloc(dup, (strlen(dup) + 1 + strlen(str)));
		strcat(dup, str);
		if (stat(dup, &st) == 0)
			return (dup);
		token = strtok(NULL, ":");
		free(dup);
	}
	return (str);
}

int main(void)
{
	int status, i;
	ssize_t f;
	size_t count = 0;
	char **argv;
	extern char **environ;
	char *buf = NULL, *token, *dup;
	pid_t child_pid;

	while (1)
	{
		printf("$ ");
		f = getline(&buf, &count, stdin);
		if (f == -1 || buf == NULL)
		{
			free(buf);
			return (-1);
		}
		buf[f - 1] = '\0';
		if (strcmp(buf, "exit") == 0)
		{
			free(buf);
			return (0);
		}
		if (strcmp(buf, "env") == 0)
			_printenv();
		argv = malloc(sizeof(char *));
		dup = strdup(buf);
		token = strtok(dup, " ");
		argv[0] = token;
		for (i = 1; token; i++)
		{
			token = strtok(NULL, " ");
			argv = realloc(argv, (i + 1) * sizeof(char *));
			argv[i] = token;
		}
		argv = realloc(argv, (i + 1) * sizeof(char *));
		argv[i] = NULL;
		child_pid = fork();
		if (child_pid == -1)
			return (-1);
		if (child_pid == 0)
		{
			if ((strcmp(buf, "env") != 0) && execve(pathfinder(argv[0]), argv, environ) == -1)
			{
				free(buf);
				free(dup);
				free(argv);
				perror("./hsh");
				return (-1);
			}
			return (0);
		}
		else
		{
			free(dup);
			free(argv);
			wait(&status);
		}
	}
	return (0);
}

