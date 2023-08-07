#include "main.h"
/**
* create_file - Cfunction that creates a file
* @filename: A pointer to the function
* @text_content: A pointer to a string
* Return:returns 1 on success,otherwise -1
*/
int create_file(const char *filename, char *text_content)
{
	int fp, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fp, text_content, len);

	if (fp == -1 || i == -1)
		return (-1);

	close(fp);

	return (1);
}
