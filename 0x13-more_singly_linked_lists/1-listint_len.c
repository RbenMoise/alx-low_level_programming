#include "lists.h"

/**
 * listint_len - elements in a linked list.
 * @h: head
 * Return:elements 
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
