#include "lists.h"
/**
  * free_dlistint - free the linked list
  * @head: head of list
  * Return: THE VOID
  */
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
