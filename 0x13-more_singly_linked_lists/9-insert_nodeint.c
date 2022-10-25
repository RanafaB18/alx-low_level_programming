#include "lists.h"
/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: first node
 * @idx: position of node in list
 * @n: data of node
 *Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new_node, *prev;

	temp = *head;
	prev = *head;
	if (temp == NULL && idx != 0)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		if (i == idx)
		{
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				prev->next = new_node;
				new_node->n = n;
				new_node->next = temp;
				return (new_node);
			}
		}
		prev = temp;
		temp = temp->next;
		i++;
	}

	return (NULL);
}
