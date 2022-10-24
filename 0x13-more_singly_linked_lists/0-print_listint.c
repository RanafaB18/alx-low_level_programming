#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t length;
	const listint_t *temp = h;

	length = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		length++;
	}

	return (length);
}
