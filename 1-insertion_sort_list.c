#include "sort.h"
#include "swap_nodes.c"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order.
 *
 * @list: A pointer to a pointer to the first element of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev;

	if ((*list) == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		prev = curr->prev;

		while (prev != NULL && prev->n > curr->n)
		{
			/*Use the swap_nodes function to perform the swap*/
			swap_nodes(list, prev, curr);

			/* Move 'prev' back to the previous node for further comparisons*/
			prev = curr->prev;

			/* Print the current state of the list after each swap*/
			print_list(*list);
		}

		curr = curr->next;
	}
}
