#include "main.h"

/**
 * strpbrk - a function that searchs the string for any of a set of bytes
 * @s: source string
 * @accept: string to be searched
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
