#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head: head pointer
 * Return:returns the address otherwise 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *him, *me;

	him = me = head;
	while (him && me && me->next)
	{
		him = him->next;
		me = me->next->next;
		if (him == me) 
		{
			him = head;
			break;
		}
	}
	if (!him || !me || !me->next)
		return (NULL);
	while (him != me)
	{
		him = him->next;
		me = me->next;
	}
	return (me);
}
