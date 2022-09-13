#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	int a = 1;
	int b = 2;

	for (counter = 2; counter <= (countto / 2); counter++)
	{
		printf("%d %d ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%d", a);

	printf("\n");

	return (0);
}
