#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node into a given index in list
 * @h: head of list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node if successful else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (!newNode)
		return (NULL);
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->n = n;
	if (!*h && idx == 0)
	{
		*h = newNode;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}
	while (temp->next)
	{
		if (count == idx - 1)
		{
			temp->next->prev = newNode;
			newNode->prev = temp;
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		count++;
	}
	if (count == idx - 1)
	{
		newNode->prev = temp;
		newNode->next = NULL;
		temp->next = newNode;
		return (newNode);
	}
	return (NULL);
}
