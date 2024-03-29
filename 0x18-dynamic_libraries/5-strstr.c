#include "main.h"

/**
 * strstr - function finds a first occurrence of the substring in main string
 * @haystack: Main string
 * @needle: Substring
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *d = needle;

		while (*a == *d && *d != '\0')
		{
			a++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
