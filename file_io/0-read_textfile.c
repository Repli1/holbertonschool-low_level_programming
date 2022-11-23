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
	int fd, w, r;

	if (buf == NULL)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(1, buf, r);
	if (w == -1)
		return (0);
	close(fd);
	free(buf);
	return (w);
}
