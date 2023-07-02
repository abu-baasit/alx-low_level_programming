#include "main.h"
#include <stdio.h>
/**
* print_array - functions that swap value of two integers
* @a: array
* @n: number of array element to be printed
* Return: a and n inputs be returned
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
