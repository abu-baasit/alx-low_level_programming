#include "main.h"		
/**
* _isalpha - function that checks for alphabetic character
* @c: the character to be checked
* Return: return 1 if c,otherwise 0
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
