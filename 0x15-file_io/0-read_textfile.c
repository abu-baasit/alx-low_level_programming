#include "main.h"
#include <stdlib.h>

/**
* read_textfile- function that reads a text file and prints it to STDOUT
* @filename: name of file to be read
* @letters: number of letters to be read and print
* Return: actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t j;
	ssize_t i;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	i = read(fp, buffer, letters);
	j = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(fp);
	return (j);
}
