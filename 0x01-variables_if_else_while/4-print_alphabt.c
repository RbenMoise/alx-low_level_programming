#include <stdio.h>
/**
 * main - lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
ii	putchar ('\n');
	return (0);
}
