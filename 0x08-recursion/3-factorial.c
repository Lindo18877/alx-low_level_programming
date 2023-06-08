#include "main.h"
#include <stdio.h>
#include "stdlib.h"
/**
 * factorial - returns the factorial of a given numbr.
 * @n: input numbr.
 * Return: factorial of the numbr.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
