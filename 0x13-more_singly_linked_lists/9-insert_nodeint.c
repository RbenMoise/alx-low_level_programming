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
	listint_t *temp, *nnew;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (j = 0; j < idx - 1 && temp != NULL; j++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	nnew = malloc(sizeof(listint_t));
	if (nnew == NULL)
		return (NULL);
	nnew->n = n;
	if (idx == 0)
	{
		nnew->next = *head;
		*head = nnew;
		return (nnew);
	} 
	nnew->next = temp->next;
	temp->next = nnew;
	return (nnew);
}
