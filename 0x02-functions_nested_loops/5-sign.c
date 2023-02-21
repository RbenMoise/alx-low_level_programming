#include "main.h"
/**
 * print_sign the sigh of a number
 * @n: the number to be checked for
 * Return: 1 and prints + of the n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints -of n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('o');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
}
