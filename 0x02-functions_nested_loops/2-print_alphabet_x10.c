#include "main.h"
/**
 * main - print_alphabet_x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char l;

	while (c++  <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);

		_putchar('\n');
	}
}
