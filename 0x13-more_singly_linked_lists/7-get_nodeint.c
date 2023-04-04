#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list to it
 * @head: head pointer
 * @index:  index of the node
 * Return: pointer to index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ko;

	if (head == NULL)
		return (NULL);
	for (ko = 0; ko < index; ko++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
