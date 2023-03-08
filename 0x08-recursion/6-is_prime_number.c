#include "main.h"
/**
 * check - recursive
 * @i: current devisor
 * @n: to be checked
 * Return: int
 */

int check(int n, int b)
{
	if (n == b)
		return (1);
	if (n % b == 0)
		return (0);
	return (check(n, b + 1));
}
/**
 * is_prime_number - prime numbers
 * @n: value
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check(n, 2));
}

