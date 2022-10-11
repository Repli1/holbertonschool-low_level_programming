#include "main.h"
/**
 * cap_string - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] <= 122 && s[i] >= 97)
			if (s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] == '.')
				if (s[i - 1] == '\n' || s[i - 1] == ';' || s[i - 1] == '"')
					if (s[i - 1] == '?' || s[i - 1] == '!' || s[i - 1] == 9)
						if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{')
							if (s[i - 1] == '}')
								s[i] = s[i] - 32;
	return (s);
}
