#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct path_s
{
	char *str;
	struct path_s *next;
} path_t;

int main(void)
{
	char *str = getenv("PATH"), *token;
	int i;
	path_t *head = malloc(sizeof(path_t));
	path_t *new;

	token = strtok(str, ":");
	head->str = token;
	head->next = NULL;
	for (i = 0; token; i++)
	{
		printf("%s\n", head->str);
		token = strtok(NULL, ":");
		new = malloc(sizeof(path_t));
		new->str = token;
		new->next = head;
		head = new;
	}
	return (0);
}
