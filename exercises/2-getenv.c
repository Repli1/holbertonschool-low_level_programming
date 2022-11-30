#include <stdio.h>
#include <string.h>


char *_getenv(const char *name)
{
	extern char **environ;
	int i, j;
	char *str;

	for (i = 0; environ[i]; i++)
	{
		str = strtok(environ[i], "=");
		if (strcmp(str, name) == 0)
			return(strtok(NULL, "="));
	}
	return (NULL);
}

int main(void)
{
	char *str = _getenv("Hola");

	return (0);
}
