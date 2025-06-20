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
		printf("%d", number);
	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
