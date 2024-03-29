#include "main.h"

/**
 * strncpy - copy the string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dests
 */

char *_strncpy(char *dest, char *src, int n)
{
	int g;

	g = 0;
	while (g < n && src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}
	return (dest);
}
