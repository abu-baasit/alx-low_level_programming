#include "main.h"
/**
* reverse_array - functions that reverse an array
* @a: array
* @n: number of elements of array
* Return:it will return
*/
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
n--;
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
