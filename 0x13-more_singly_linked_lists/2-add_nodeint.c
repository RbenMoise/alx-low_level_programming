#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint - add nod in the beggining of the list
  * @head: head pointer
  * @n: intlist
  * Return: NULL if it failed does not return the address of the new element 
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
