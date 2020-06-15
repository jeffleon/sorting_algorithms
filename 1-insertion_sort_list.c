#include "sort.h"


void swap_node(listint_t *left, listint_t *right, listint_t **list)
{
	listint_t *tmp;

	tmp = right->next;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;
	left->next = tmp;
	if (right->prev != NULL)
		right->prev->next = right;
	else
		*list = right;
	if (tmp)
		tmp->prev = left;
}


void insertion_sort_list(listint_t **list)
{
	listint_t *copy = NULL;
	listint_t *copy_r = NULL;
	copy = *list;
	for(;copy && copy->next;copy=copy->next)
	{
		if(copy->n > copy->next->n)
		{
			swap_node(copy, copy->next, list);
			copy = copy->prev;
			copy_r = copy;
			for(;copy_r && copy_r->prev;copy_r=copy_r->prev)
			{
				if(copy_r->n < copy_r->prev->n)
				{
					swap_node(copy_r->prev, copy_r, list);
					
				}
				copy_r = copy_r->next;
			}
		}
	}
}