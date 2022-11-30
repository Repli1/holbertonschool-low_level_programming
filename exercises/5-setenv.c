#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _setenv(const char *name, const char *value, int overwrite)
{
	extern char** environ;
	char *token, *name2 = strdup(name), *value2 = strdup(value);
	int i, j;

	for (i = 0; environ[i]; i++)
	{
		token = strtok(strdup(environ[i]), "=");
		if (strcmp(token, name) == 0)
		{
			if (overwrite == 0)
			{
				return (0);
			}
			else
			{
				strcat(token, "=");
				strcat(token, value2);
				strcpy(environ[i], token);
				return (0);
			}
		}
	}
	strcat(name2, "=");
	strcat(name2, value2);
	environ[i] = malloc(strlen(name2) + 1);
	strcpy(environ[i], name2);
	environ[i + 1] = NULL;
	return (0);
}

int main(void)
{
	extern char **environ;
	int i;
	/*_setenv("PATH", "Hola", 0);*/
	_setenv("OLDPWD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 1);
	/*_setenv("HOLA", "Holaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 0);*/
	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
	return (0);
}
