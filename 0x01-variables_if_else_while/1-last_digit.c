#include <stdlib.h>

#include <time.h>

#include <stdio.>

/**
 * main - prints a text according number
 * Return: Always (Success)
 *
 */

int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasrd = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("Last digit of %d is  %d and is less than 6 and not 0\n",n, lastd);
	}
	return (0);
}
