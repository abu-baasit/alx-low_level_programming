#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function that prints name
* @name: a string
* @f: pointer to function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f != NULL)
f(name);
}
