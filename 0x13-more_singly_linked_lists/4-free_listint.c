#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: first node of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *current;

	temp = head;
	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
}
