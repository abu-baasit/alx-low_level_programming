#include "main.h"
/**
* char *_strcpy - function that copies the string pointed to by src
* @dest: input
* @src: ouput
* Return: return string
*/
char *_strcpy(char *dest, char *src)
{
int m = 0;
int l = 0;
while (*(src + m) != '\0')
{
m++;
}
for (; l < m; l++)
{
dest[l] =  src[l];
}
dest[m] = '\0';
return (dest);
}

