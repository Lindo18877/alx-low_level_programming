#include "main.h"

/**
 * strspn - the function that gets a length of the prefix substrings
 * @s: String
 * @accept:string
 *
 * Return: the numbr of bytes in a initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				k++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
