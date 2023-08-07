#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - To reserve a memory space of 1024 bytes for the buffer.
 * @file: The file name associated with char storage in the buffer.
 *
 * Return: A pointer to the newly-allocated buffer memory.
 */

char *create_buffer(char *file)
{

	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);

}

/**
 * close_file - for closing of file descriptors.
 * @fd: The file descriptor intended for closure.
 */

void close_file(int fd)
{

	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

