#include "main.h"
/**
* main - Entry point
* Description: print_alphabet_10 folled by new lines
* Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
int i = 0;
char letter;
while (i++ < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
