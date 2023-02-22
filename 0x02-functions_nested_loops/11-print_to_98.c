#include <stdio.h>
/**
 * print_to_98 - prints n to 98 counts
 * @n: input
 */

void print_to_98(int n)
{
	int c;

	if (n >= 98)
	{
		while (c > 98)
			printf("%d, ", c);
		printf("%d\n", n);
	}
	else
	{
	       while (c < 98)
			printf("%d, ", n++);
	       print("%d\n", n);
	}
}
