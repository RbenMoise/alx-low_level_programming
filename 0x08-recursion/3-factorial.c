#include "main.h"
/**
 * factorial - gives the factorial of a number
 * @n: value
 * Return: 0 if lower than 0 -1 if error 0 for facts of 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
