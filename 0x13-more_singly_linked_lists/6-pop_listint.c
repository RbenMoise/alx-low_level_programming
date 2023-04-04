#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of the listint_t linked list
 * @head: a double pointer to the head node of the list
 *Return: the data from the head node ot 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *stt;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	stt = *head;
	*head = stt->next;
	data = stt->n;
	free(stt);
	return (data); 
}
