#include "main.h"
/**
* print_rev - functions that prints a string in reverse
* @s: input string
* Return: no return
*/
void print_rev(char *s)
{
int longi = 0;
int i;
while (*s != '\0')
{
longi++;
s++;
}
s--;
for (i = longi; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
