#include "main.h"
/**
* char *_strcpy - function that copies the string
* @dest: destination
* @src: source
* Return: return string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
