#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n numbers of element of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int z;

	for (x = 0; x < n--; x++)
	{
		z = a[x];
		a[x] = a[n];
		a[n] = z;
	}
}
