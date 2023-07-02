#include "main.h"
/**
* puts2 - functions that print every other character of a string
* @str: inputs
* Return: prints n
*/
void puts2(char *str)
{
int longi = 0;
int l = 0;
char *m = str;
int i;
while (*m != '\0')
{
m++;
longi++;
}
l = longi - 1;
for (i = 0; i <= l; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
