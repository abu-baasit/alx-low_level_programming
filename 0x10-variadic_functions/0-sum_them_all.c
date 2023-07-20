#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function tha returns the sum of all its paramters.
* @n: The number of paramters passed to the function.
* @...: Number of varaible parameters
* Return: If n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
