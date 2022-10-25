#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: first node of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			current = temp;
			temp = temp->next;
			free(current);
		}
		*head = NULL;
	}
}
