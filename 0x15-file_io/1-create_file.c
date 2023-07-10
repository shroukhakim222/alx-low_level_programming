#include "main.h"

/**
 * create_file -  creates a file.
 * @filename: pointer to file
 * @text_content: text to be added
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		while (text_content[len] != '\0')
			len++;
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	close (fd);
	return (1);
}
