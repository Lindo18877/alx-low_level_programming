#include "main.h"
#include "stdio.h"
#include <stdlib.h>

/**
 * is_prime - detects if an input numbr is a prim numbr.
 * @n: input numbr.
 * @c: iterator.
 * Return: 1 if n is a prim numbr. 0 if n is not a prim numbr.
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prim_numbr - detects if an input numbr is a prim numbr.
 * @n: input numbr.
 * Return: 1 if n is a prim numbr. 0 if n is not a prim numbr.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
