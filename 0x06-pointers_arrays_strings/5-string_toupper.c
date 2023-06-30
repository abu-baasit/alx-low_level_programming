#include "main.h"
/**
* string_toupper - functions that changes lower case to upper cases
* @n: the input string to be returned
* Return: changing lower caae to upper case
*/
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
i++;
}
return (n);
}
