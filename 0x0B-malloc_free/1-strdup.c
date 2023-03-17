#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup -return a pointer to a new allocation
 * @str: string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	size_t len;
	char *new_str;

	if (str == NULL)

		return (NULL);

	len = strlen(str) + 1;

	new_str = (char *)malloc(len * sizeof(char));

	if (new_str == NULL)

		return (NULL);

	memcpy(new_str, str, len);
	return (new_str);
}
