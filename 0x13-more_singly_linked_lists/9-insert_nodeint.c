#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a new node in a given  postion in hte list 
 * @head: a  double head  pointer
 * @idx: this is the  index of the node
 * @n: new node value n
 *
 * Return: retuns the address of new node ro null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *tmp, *nnew;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (j = 0; j < idx - 1 && tmp != NULL; j++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	temp->next = new;
	return (new);
}
