#include <stdio.h>
/**
 * main - Entry point
 * description: A program that prints both lower and upper case
 * Return: Always 0
 */
int main(void)
{
int i = 97;
int j = 65;
while (i <= 122)
{
putchar(i);
i++;
}
while (j <= 90)
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
