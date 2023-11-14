#include "main.h"

/**
* _strncat - function concatenating two strings will
* use most n bytes from src
* description: function that cancatenates two strings
* @dest: destination strings
* @src: source string pointer and a value
* @n: it is a number byte from src
* Return: will return to value dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
