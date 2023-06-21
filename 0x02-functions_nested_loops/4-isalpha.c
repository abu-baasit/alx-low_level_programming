#include "main.h"
/**
* main - Entry point
* description: A program that print lower case witn exception
* Return: Always 0
*/
int _isalpha(int c)
{
if ((c <= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
