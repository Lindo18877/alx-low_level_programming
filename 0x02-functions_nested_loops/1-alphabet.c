#include "main.h"
#include "stddef.h"

/**
 * print_alphabet - make alphaber
 * Retuen: void
 *
 */
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}

