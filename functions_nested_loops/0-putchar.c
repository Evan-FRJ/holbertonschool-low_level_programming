#include "main.h"
/**
* main - prints "_putchar"
*
* Return: Alawys 0 (Success)
*/

int main(void)
{
	char put = "_putchar\n";

	while (put)
	{
		putchar(put);
		put++;
	}
	return (0);
}
