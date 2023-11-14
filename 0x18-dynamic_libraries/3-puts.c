#include "main.h"
/**
* _puts - functions that prints a string
* @str: strings to print
* Return: n will be return
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
