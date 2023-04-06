#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: this will check the bit 
 * @index: index which is to be checked
 * Return: value of the bit at ind
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int z;

	z = (n >> index);
 	if (index > 32)
	return (-1);
	return (z & 1);
}
