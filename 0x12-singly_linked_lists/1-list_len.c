#include < stdlib.h >
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - to check the code
* @h: list name
* Return: nodes.
*/
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	for (const list_t *current = head; current != NULL; current = current->next)
node_count++;

	return (node_count);
}
