#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;
	long c;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li %li ", a, b);
		c = a + b
		a = b;
		b = c;
	}
	if (countto % 2 == 0)
		printf("%li", a);

	printf("\n");

	return (0);
}
