#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free the list
 * @head:head
 * Return: NULL if it was'mt successfu;;
 */

void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
