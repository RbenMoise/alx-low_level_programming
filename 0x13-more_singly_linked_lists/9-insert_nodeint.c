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
	listint_t *new_node, *temp;
	unsigned int j = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temp = *head;
	for (; j < idx - 1 && temp != NULL; j++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
