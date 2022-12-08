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
	dlistint_t *temp = *h;
	unsigned int count = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->n = n;

	if (!*h && idx == 0)
	{
		*h = newNode;
		return (newNode);
	}
	while (temp)
	{
		if (count + 1 == idx)
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
	return (NULL);
}
