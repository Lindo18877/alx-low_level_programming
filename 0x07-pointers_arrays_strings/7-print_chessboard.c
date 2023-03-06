#include "main.h"
#include <stdio.h>

/**
 * print_chessbord - Entry point
 * @a: array
 *
 * Return: Always 0 (Success)
 */

void print_chessbord(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		printf(a[x][y]);
		printf('\n');
	}

}
