#include "main.h"
/**
 * check - recursive
 * @i: current devisor
 * @n: to be checked
 * Return: int
 */

int check(int a, int b)
{
	if (i == n)
		return (1);
	if (n % a == 0)
		return (0);
	return (check(n, a + 1));
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
	return check(n, 2);
}

