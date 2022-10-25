#include "lists.h"
/**
 * listint_len-  returns number of elements of a listint_t list
 * @h: linkedlist
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
