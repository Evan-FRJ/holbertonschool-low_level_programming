#include <stdio.h>
/**
 * main - If a number is a multiple of three, it's replaced by Fizz. For multiples of five, it's replaced by Buzz. For both, it's replaced by FizzBuzz
 * Return: 0
 */
int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", h);
	h++;
	}
return (0);
}
