#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parametrs.
 * @n: The numbr of parametrs passd to a function.
 * @...: A variable number of parametrs to calc the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parametrs.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;


	va_start(ap, n);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);


	va_end(ap);


	return (sum);
}
