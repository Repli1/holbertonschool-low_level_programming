#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(void)
{
	int i, j, status;
	size_t f;
	size_t count = 0, *p = &count;
	char **buf;
	pid_t child_pid;

	while (1)
	{
		printf("$ ");
		buf = malloc(sizeof(char) * count);
		f = getline(buf, p, stdin);
		buf[0][f - 1] = '\0';
		if (f == -1)
			return (-1);
		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(buf[0], &buf[0], NULL) == -1)
				perror("Error:");
		}
		else
			wait(&status);
	}
	return (0);
}
