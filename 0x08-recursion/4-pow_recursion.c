#include "main.h"
#include <stdlib.h>
#include "stdio.h"
/**
 * _pow_recursion - returns the value of y raised to the power of x.
 * @x: exponent.
 * @y: base.
 * Return: value of the exponant.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
