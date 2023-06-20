#include <stdio.h>
/**
* main - Entry point
* description: A program that print lower case witn exception
* Return: Always 0
*/
int main(void)
{
int m;
int n;
int o;
for (m = 0; m <= 7; m++)
{
for (n = m + 1; n <= 8; n++)
{
for (o = n + 1; o <= 9; o++)
{
if ((n != m) != o)
putchar(m);
putchar(n);
putchar(o);
if (m == 7 && n == 8 && o == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
