#include <stdio.h>
/**
 * main - A program that prints various data types and sizes
 * return - once it prints 0 (successful)
 */
int main(void)
{
char a;
int b;
long int c;        	    
long long int d;
float f;
printf("size of char: %lu byte(s)\n", sizeof(char));
printf("size of int: %lu byte(s)\n", sizeof(int));
printf("size of long int c: %lu byte(s)\n", sizeof(long int));
printf("size of long long int d: %lu byte(s)\n", sizeof(long long int));
printf("size of float: %lu byte(s)\n", sizeof(float));
return (0);
}
