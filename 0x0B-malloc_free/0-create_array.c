#include "main.h"
#include <stdlib.h>
/**
 * create_array - craeates an array of chars
 * @size: the size of the array
 * @c: initial value
 * Return: a pointer to the arra
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

