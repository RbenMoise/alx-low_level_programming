#include "lists.h"
/**
 *  * free_dlistint - Frees a dlistint_t list.
 *   * @head: A pointer to the head of the list.
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
