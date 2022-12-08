#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: head of list
 * @index: index of new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (temp && temp->next && temp->next->next)
	{
		if (count == index - 1)
		{
			temp->next = temp->next->next;
			temp->next->next->prev = temp;
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
