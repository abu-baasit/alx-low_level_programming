#include "main.h"
/**
* print_last_digit - A program that prints last digit
* @n: number to be computed
* Return: the last digit num
*/
int print_last_digit(int n)
{
int j = n % 10;
if (j < 0)
j = j * -1;
_putchar(j + '0');
return (j);
}
