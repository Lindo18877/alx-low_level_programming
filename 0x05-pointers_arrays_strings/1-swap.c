#include "main.h"
#include <stdin.h>

/**
 * main - function that swaps the values of two integers.
 * Return : Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	prntf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
