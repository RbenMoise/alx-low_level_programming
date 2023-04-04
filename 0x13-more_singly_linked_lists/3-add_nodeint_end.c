#include <stdlib.h> 
#include "lists."
/*
  * add_nodeint_end - andd node in the end
  * @head: head 
  * @n: int 
  * Return: NULL if it failed to add
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	char *me;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	me = strme(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = me;
	new->len = len; 
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
