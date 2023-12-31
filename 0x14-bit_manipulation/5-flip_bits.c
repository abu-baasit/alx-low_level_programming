#include "main.h"
/**
* flip_bits - function that returns the number of bits
* @n: first number
* @m: second number
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, create = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
{
	current = exclusive >> k;
	if (current & 1)
	create++;
}
	return (create);
}
