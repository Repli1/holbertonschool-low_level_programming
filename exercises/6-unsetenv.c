#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _unsetenv(const char *name)
{
	extern char **environ;
	char **ep, **sp;
	size_t len;
	
	len = strlen(name);
	for (ep = environ; *ep;)
	{
		if (strncmp(*ep, name, len) == 0 && (*ep)[len] == '=')
		{
			for (sp = ep; *sp; sp++)
				*sp = *(sp + 1);
		}
		else
			ep++;
	}
	return (0);
}

int main(void)
{
	extern char **environ;
	int i;
	/*_unsetenv("PATH");*/
	/*_unsetenv("HOLA");*/
	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
	return (0);
}
