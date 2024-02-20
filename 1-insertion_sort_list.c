#include "sort.h"



/**
* insertion_sort_list - sorts a doubly linked list of integers in
* ascending order using the Insertion sort algorithm
* @list: the given list to sort.
* Return: Always 0.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *temp, *current;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		sorted = current;
		while (sorted->prev && sorted->n < sorted->prev->n)
		{
			temp = sorted->prev;
			if (temp->prev)
				temp->prev->next = sorted;
			sorted->prev = temp->prev;
			temp->prev = sorted;
			temp->next = sorted->next;
			if (sorted->next)
				sorted->next->prev = temp;
			sorted->next = temp;

			if (!sorted->prev)
				*list = sorted;
			print_list(*list);
		}
		current = current->next;
	}
}
