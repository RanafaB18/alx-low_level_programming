#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *prev = NULL;

	while (current)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
}
