#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator -function that execute array given as parameter
* @array: an array
* @size: size of an array
* @action: pointer to the function
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;
if (array && action != NULL)
for (k = 0; k < size; k++)
{
action(array[k]);
}
}
