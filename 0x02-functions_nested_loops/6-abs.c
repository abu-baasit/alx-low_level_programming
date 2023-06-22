#include "main.h"
/**
* _abs - program that computes nval of int
* @c: number to be compile
* Return: Absolute value of number or zero
*/
int _abs(int c)
{
if (c < 0)
{
int j;
j = c * -1;
return (j);
}
return (c);
}
