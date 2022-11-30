#include <stdio.h>

int main(int argc, char **argv, char**env)
{
	extern char **environ;
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
		printf("%s\n", env[i]);
	}
}
