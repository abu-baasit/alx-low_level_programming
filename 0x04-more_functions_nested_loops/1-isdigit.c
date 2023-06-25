#include "main.h"
/**
* _isdigit - A program that prints digit
* @c: character to be checked
* Return: 1 is returned if its a digit,0 fot otherwise
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
