#include "main.h"
/**
* print_sign - A program that prints number
* @n: the number to check
* Return: 1 if its positive,-1 if its negative, or zero if is zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar (45);
return (-1);
}
else
{_putchar(48);
return (0);
}
}
