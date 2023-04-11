#include "main.h"

/**
 * get_endianness -this will look for endianness
 * Return: 0 for big endian otherwise 1 for little endian
 */
int get_endianness(void)
{
	int z;

	z = 1;
	if (*(char *)&z == 1)
		return (1);
	else
		return (0);
}
