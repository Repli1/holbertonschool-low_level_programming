#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - A function that appends text to a file
 * @filename: The name of the file
 * @text_content: Text to append.
 * Return: -1 if it fails, 1 if it succeeds.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, count = 0;

	if (text_content == NULL)
		text_content = "";
	while (text_content[count] != '\0')
		count++;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	w = write(fd, text_content, count);
	if (w == -1)
		return (-1);
	return (1);
}
