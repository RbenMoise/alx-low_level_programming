#include "main.h"
/**
 * check - returns the squar root 
 * @a: the value
 * @b: value
 * Return: -1 if not natural
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	else
		return (check(a + 1, b));

}
/**
*_sqrt_recursion - returns the squar root
*@n: value
*Return: int
*/


int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1,n));
}
