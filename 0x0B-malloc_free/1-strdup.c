#include <stdlib.h>
#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	if (str == NULL)

		return (NULL);

	size_t len = strlen(str) + 1;

	char *new_str = (char *)malloc(len * sizeof(char));

	if (new_str == NULL)

		return (NULL);

	memcpy(new_str, str, len);
	return (new_str);
}
