#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tempo;
	if (list == NULL || *list == NULL)
		return;
	if((*list)->next == NULL)
		return;
	tempo = (*list->next);

	while(tempo)
	{
		while(tempo->prev != NULL && tempo->prev->n > tempo->n)
		{
			tempo->prev->next = tempo->next;

			if(tempo->next != NULL)
				tempo->next->prev = tempo->prev;

			tempo->next = tempo->prev;
			tempo->prev = tempo->prev->prev;
			tempo->next->prev = tempo;

			if (tempo->prev = NULL)
				*list = tempo;
			else
				tempo->prev->next = tempo;
			print_list(*list);

		}
		tempo = tempo->next;

	}

}
