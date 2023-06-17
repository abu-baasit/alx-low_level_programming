#include <stdio.h>
/**
 * main - program to print sizes of various data types
 * return - once it prints 0 (successful)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int c: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int d: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
