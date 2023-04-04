#ifndef LISTS
#define LISTS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @st: string - malloc string
 * @len: this will be the length of the string
 * @next: this will be pointing to the next node of the
 * Description: this is the structure of a singly linked list
 */
typedef struct list_s
{
	char *st;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
