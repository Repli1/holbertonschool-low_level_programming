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

	if (filename == NULL)
		return (0);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(1, buf, r);
	close(fd);
	free(buf);
	return (w);
}
