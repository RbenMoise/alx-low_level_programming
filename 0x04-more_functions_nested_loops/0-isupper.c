#include "main.h"
/**
 * _isupper - checks for the lower or uppercase
 * Returns: 1 if upper elsse 0
 * @c: int to be checked
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
