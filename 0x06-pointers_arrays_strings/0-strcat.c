#include "main.h"
#include <string.h>
#include <stdio.h>

// _strcat concatenates two strings.

char *_strcat(char *dest, char *src)
{
	int x; // input value
	int y; // input value

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest)
}
