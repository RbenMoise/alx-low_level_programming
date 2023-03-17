#include <"main.h">
/**
 * malloc_checked - checks the entry point
 * @b: memorry to ba allocated
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (b == NULL)
		exit(98);
	return (ptr);
}
