#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 *
 * @list: A pointer to a pointer to the first element of the list
 * @prev: The previous node
 * @curr: The current node
 */
void swap_nodes(listint_t **list, listint_t *prev, listint_t *curr)
{
	if (prev->prev)
		prev->prev->next = curr;
	else
		*list = curr;
	if (curr->next)
		curr->next->prev = prev;

	prev->next = curr->next;
	curr->prev = prev->prev;
	prev->prev = curr;
	curr->next = prev;
}
