#include "main.h"
/**
 * append_text_to_file -function that appends text at the end of a file
 * @filename: A pointer to the function
 * @text_content: A string
 * Return:retturns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int text, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
{
		for (len = 0; text_content[len];)
			len++;
}

	text = open(filename, O_WRONLY | O_APPEND);
	i = write(text, text_content, len);

	if (text == -1 || i == -1)
		return (-1);

	close(text);

	return (1);
}
