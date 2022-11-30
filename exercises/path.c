#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
	int i, status;
	char *path = getenv("PATH");
	char *token = strtok(path, ":"), *str;
	struct stat st;
	pid_t child_pid;

	for (i = 1; argv[i]; i++)
	{
		while (token)
		{
			child_pid = fork();
			if (child_pid == 0)
			{
				str = strdup(token);
				strcat(str, "/");
				if (stat(strcat(str, argv[i]), &st) == 0)
				{
					printf("%s\n", str);
				}
				token = strtok(NULL, ":");
			}
		}
	}
	return (0);
}

