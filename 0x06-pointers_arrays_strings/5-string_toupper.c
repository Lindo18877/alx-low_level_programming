#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * String_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
	if (n[x] >= 'a' && n[x] <= 'z')
	n[x] = n[x] - 32;

	x++;
	}
	return (n);
}
