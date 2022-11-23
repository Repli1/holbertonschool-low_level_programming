#include "main.h"
#include <unistd.h>

/**
 * create_file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count = 0, w;

	while (text_content[count] != '\0')
		count++;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	w = write(fd, text_content, count);
	if (w == -1)
		return (-1);
	return (1);
}
