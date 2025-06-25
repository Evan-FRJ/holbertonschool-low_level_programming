#include "main.h"
/**
 * print_line - Prints a line of n underscores long.
 * @n: is the integer for the paramaters of the function
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
