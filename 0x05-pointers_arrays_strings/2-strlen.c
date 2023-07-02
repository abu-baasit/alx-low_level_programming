#include "main.h"
/**
* _strlen - functions that returns the lenght of a string
* @s: a string
* Return: a lenght of a string will be returned
*/
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
