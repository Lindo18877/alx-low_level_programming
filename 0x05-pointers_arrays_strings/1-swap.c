#include "main.h"
#include <stdin.h>

/*
 * swap_int - function that swaps the values of two integers.
 * Return : nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
