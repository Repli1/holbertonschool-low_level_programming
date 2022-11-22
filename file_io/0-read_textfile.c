#include "main.h"
#include <unistd.h>

/**
 * read_textfile - A function that reads a file and prints it.
 * @filename: The name of the file to print.
 * @letters: The number of characters to print.
 * Return: The number of characters actually printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	size_t i = 0;

	if (filename == NULL)
		return (0);
	if (buf == NULL)
		return (0);
	open(filename, O_RDONLY);
	read(3, buf, letters);
	write(1, buf, letters);
	while (buf[i] != '\0')
		i++;
	free(buf);
	if (i < letters)
	{
		return (i);
	}
	else
	{
		return (letters);
	}
}
