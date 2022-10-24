#include "lists.h"
/**
 * print_listint-  prints all the elements of a listint_t list
 * @h: linkedlist
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		length++;
	}
	return (length);
}
