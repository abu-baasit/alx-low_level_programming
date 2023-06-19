#include <stdio.h>
/**
 * main - Entry point
 * description: A program that print lower case witn exception
 * Return: Always 0
 */
int main(void)
{
int i = 122;
while (i >= 97)
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
