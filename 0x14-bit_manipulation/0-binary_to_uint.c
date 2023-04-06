#include "main.h"

/**
 * binary_to_uint -binary to unsigned int.
 * @b: pointing to  0 and 1 chars
 * Return: it returns the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int l;

	l = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		l <<= 1;
		if (b[k] == '1')
			l += 1;
	}
	return (l);
} 
