#include "function_pointers.h"
/**
* int_index - function that searches for an interger
* @array: an array
* @size: number of elements in array
* @cmp: pointer to function
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (k = 0; k < size; k++)
{
if (cmp(array[k]))
return (k);
}
return (-1);
}
