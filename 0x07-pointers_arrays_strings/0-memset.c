#include "main.h"
/**
* _memset - functions that fill memory withwith constant style
* @s: pointer
* @b: number of bytes to be filled
* @n: constant byte
* Return:returns pointer to memory
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

