#include "main.h"

/**
* _isupper - checks for uppercase letter
*
* @c: the character to be checked
* Return: 0 or 1
*
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

