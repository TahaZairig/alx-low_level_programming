#include "main.h"

/**
 * create_file - To create files.
 * @filename: The pointer to the name of files to be created.
 * @text_content: The pointer to the strings to write to the files.
 * Return: -1: If the function fails
 * and 1 for success
 */

int create_file(const char *filename, char *text_content)
{

	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);

}

