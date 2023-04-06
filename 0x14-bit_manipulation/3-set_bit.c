#include "main.h" 

/**
 * set_bit - the bit on the index given
 * @index: the index to the bit
 * @n: n 
 * Return: returns 1 if it worked, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = 1 << index;
	*n = *n | k;  

  	return (1);
}
