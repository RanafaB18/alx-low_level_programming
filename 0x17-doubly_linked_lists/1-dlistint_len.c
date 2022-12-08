#include "lists.h"
/**
 * dlistint_len - print all elements of a doubly linked list
 * @h: head of doublylinked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t nnodes = 0;

	while (temp)
	{
		nnodes++;
		temp = temp->next;
	}
	return (nnodes);
}
