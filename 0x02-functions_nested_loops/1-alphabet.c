#include "main.h"
/**
* main - Entry point
* print_alphabet - prints the alphabet in lower case followed by a new line
* Return: Always 0
*/
void print_alphabet(void)
{
int i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
_putchar('\n');
}
