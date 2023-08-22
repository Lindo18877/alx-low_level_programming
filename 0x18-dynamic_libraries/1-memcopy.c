#include "main.h"

/**
 * memcpy - the function that copies memory areas
 * @dest: where memory is stored
 * @src: where memory is copied from
 * @n: numbr of bytes
 *
 * Return: copied memory with n byte changd
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
