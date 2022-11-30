#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
	int i, status, n = 0;
	char *path = getenv("PATH");
	char *token = strtok(path, ":"), *str;
	struct stat st;
	pid_t child_pid;

	for (i = 1; argv[i]; i++)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			while (token)
			{
				str = strdup(token);
				strcat(str, "/");
				if (stat(strcat(str, argv[i]), &st) == 0 && n == 0)
				{
					printf("%s\n", str);
					n++;
				}
				token = strtok(NULL, ":");
			}
			n = 0;
		}
		else
			wait(&status);
	}
		return (0);
}

