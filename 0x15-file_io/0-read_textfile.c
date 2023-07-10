#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: pointer to file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * f the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	char *cha;
	ssize_t fd, s;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	cha = malloc(sizeof(char) * letters);
	if (cha == NULL)
		return (0);
	s = read(fd, cha, letters);
	i = write(STDOUT_FILENO, cha, s);
	if (i == -1)
		return (0);
	close(fd);
	free(cha);
	return (i);
}
