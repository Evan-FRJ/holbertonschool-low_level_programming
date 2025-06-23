#include "main.h"

/**
* is_upper - checks for uppercase letter
*
* Return: 0 or 1
*
*/

int is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

