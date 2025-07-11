#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number and checks if it is
 * positive, negative, or zero, then prints the result.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}

	else if (n < 0)
	{
		printf("%d is negative", n);
	}

	else
	{
		printf("%d is 0", n);
	}
	return (0);
}
