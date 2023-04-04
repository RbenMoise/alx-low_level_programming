#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for ( j = 0; j < (index - 1); j++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
