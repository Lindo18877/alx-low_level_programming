#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate of a string
 * @str: The string to duplicate
 *
 * Return: The string duplicated
 */

char *_strdup(char *str)
{
	int y = 0, x = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[x])
	{
		x++;
	}

	s = malloc((sizeof(char) * x) + 1);

	if (s == NULL)
		return (NULL);
	while (y < x)
	{
		s[y] = str[y];
		y++;
	}

	s[y] = '\0';
	return (s);
}
