#include "main.h"

/**
 * strchr - a function that points a character in the string.
 * @s: String
 * @c: character to be searched
 *
 * Return: a pointr to the first occurrence of the charactr c in the string s
 * or NULL if the charactr is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
