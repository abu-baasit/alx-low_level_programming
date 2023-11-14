#include "main.h"
/**
* _memcpy - function that copies memory area
* @dest: memory destination
* @src: memory source
* *@n: number of bytes
* Return: return copied memory with n byted
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int j = 0;
int i = n;
for (; j < i; j++)
{
dest[j] = src[j];
n--;
}
return (dest);
}

