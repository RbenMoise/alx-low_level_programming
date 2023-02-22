#include <stdio.h>
/**
 * main - entry point
 * Return: 0 success
 */

int main(void)
{
	int c;

	unsigned long n1 = 0, n2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = n1 + n2;
		printf("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
