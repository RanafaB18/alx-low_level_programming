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

	if (!*head)
	{
		return (-1);
	}
	while (temp->next)
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

			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	if (count == index)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}

	return (-1);
}
