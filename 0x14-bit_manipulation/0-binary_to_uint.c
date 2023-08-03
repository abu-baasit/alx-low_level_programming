#include "main.h"
/**
* binary_to_uint - function that converts a binary
* number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return:return the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int binary = 0;

	if (!b)
	return (0);
	for (k = 0; b[k]; k++)
{
	if (b[k] < '0' || b[k] > '1')
	return (0);
	binary = 2 * binary + (b[k] - '0');
}

	return (binary);
}
