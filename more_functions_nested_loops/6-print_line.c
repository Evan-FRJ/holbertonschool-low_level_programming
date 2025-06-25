#include "main.h"
/**
 * print_line - Prints a line of n underscores long.
 * @n: is the integer for the paramaters of the function
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
