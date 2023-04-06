#include "main.h"

/**
 * flip_bits - filp to get frm one to the next
 * @n: val
 * @m: 2val
 * Return: fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, c = 0;

	for (x = n ^ m; x > 0; x >>= 1) 
	{
		c += (x & 1);
	}

	return (c);

