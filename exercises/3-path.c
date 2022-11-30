#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = getenv("PATH"), *token;
	int i;

	token = strtok(str, ":");
	for (i = 0; token; i++)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
	return (0);
}
