#include <stdio.h>
/**
 * print_to_98 - prints n to 98 counts
 * @n: input
 */

void print_to_98(int n)
{
	int c;

	if (n >= 98)
		for (c = n; c > 98; c--)
			printf("%d, ", c);
	else
		for (c = n; c < 98; n++)
			printf("%d, ", c);
}
