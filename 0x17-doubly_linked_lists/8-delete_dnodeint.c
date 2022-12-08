#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of list
 * @index: index of new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;

	if (!temp)
	{
		while (temp->prev)
		{
			temp = temp->prev;
		}
	}
	while (temp)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
				return (1);
			}
			else
			{
				(temp->prev)->next = temp->next;
				if (temp->next != NULL)
				{
					temp->next->prev = temp->prev;
				}
			}
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
