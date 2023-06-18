#include <stdio.h>
/**
 * main - Entry point
 * description: A program that prints lower case letter
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 97;
while (i <= 122)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
