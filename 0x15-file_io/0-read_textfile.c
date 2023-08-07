#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file prints in stdout.
 * @filename: read text files
 * @letters: how much ltters to read
 * Return: the number of bytes to read and print
 * and 0 if the function failsed or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);

}

