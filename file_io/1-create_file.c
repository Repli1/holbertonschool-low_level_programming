#include "main.h"
#include <unistd.h>

/**
 * create_file - A function that creates a file with text.
 * @filename: Name of the file to be created.
 * @text_content: Content of the file to be created.
 * Return: 1 if success, -1 if catastrophe.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count = 0, w;

	if (text_content == NULL)
		text_content = "";
	while (text_content[count] != '\0')
		count++;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, count);
	if (w == -1)
		return (-1);
	return (1);
}
