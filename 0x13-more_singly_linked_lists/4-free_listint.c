#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: first node of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		listint_t *current = temp;
		temp = temp->next;
		free(current);
	}
	return;
}
