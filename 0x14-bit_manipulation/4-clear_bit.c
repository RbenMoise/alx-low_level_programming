#include "main.h"

/**
 * clear_bit - sets bit to 0 at the given index
 * @n:points to the bit
 * @index: index from 0 to the set needed
 * Return: -1 0r otherwise 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

 	return (1);
}
