#include <stdio.h>
/**
 * main - entry point
 * Return:0 success
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 2; j <= 8; j++)
		{
			for (k = 3; k <= 9; k++)
			{
				if (i != j && j != k && i != k)
				{
					putchar('0' + i);
					putchar(j + '0');
					putchar(k + '0');
					if (i <7)
					{
						putchar(',')'
						putcha(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
