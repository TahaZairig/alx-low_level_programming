#include "main.h"

/**
 * append_text_to_file - To Append the text at the end of the file
 * @filename: The pointer to the name of the file.
 * @text_content: The string to add at the end of the file
 * Return: -1: If the function fails or filename is NULL
 * Also -1: If the file does not exist the user lacks write permissions.
 * And 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);

}

