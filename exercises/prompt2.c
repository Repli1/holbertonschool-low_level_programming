#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[8] = "Hola XD", delim[2] = " ", *r;

	r = strtok(str, delim);
	while (r)
	{
		printf("%s\n", r);
		r = strtok(NULL, delim);
	}
	return (0);
}
