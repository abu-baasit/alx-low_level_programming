#include "main.h"
/**
* _strcmp - functions that compare two strings
* @s1:value to be compare
* @s2: value to compare
* Return: it wll return zero if strings are equal,otherwise return other number
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
