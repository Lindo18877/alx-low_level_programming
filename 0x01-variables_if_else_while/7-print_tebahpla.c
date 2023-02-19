#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry poin
 * Return: Always 0 (Success)
 */

int mani(void)

{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
