#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, j;
	size_t count = 0, f;
	size_t *p = &count;
	char **buf;

	for (i = 0; argv[i] != NULL; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			count++;
		}
	}
	buf = malloc(sizeof(char) * count);
	printf("$ ");
	f = getline(buf, p, stdin);
	if (f == -1)
		return (-1);
	for (i = 0; buf[i] != NULL; i++)
	{
		printf("%s", buf[i]);
	}
	return (0);
}
