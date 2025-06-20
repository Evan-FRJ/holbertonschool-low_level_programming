#include <stdio.h>

/**
 * main - Prints all base 16 numbers
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
