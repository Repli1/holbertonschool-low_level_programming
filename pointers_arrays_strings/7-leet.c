#include "main.h"
/**
 * leet - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	int i, j;

	int a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int arr[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j != 9; j++)
		{
			if (a[j] == s[i])
				s[i] = arr[(j + 1) / 2]
		}
	}
	return (s);
}
