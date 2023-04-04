#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -frees a listint_t list
 * @head: head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *l_next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		l_next = (*head)->next;
		free(*head);
		*head =l_next;
	}
}
