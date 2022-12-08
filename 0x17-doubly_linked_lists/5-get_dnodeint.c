#include "lists.h"
/**
  * get_dnodeint_at_index - get nth node
  * @head: head of list
  * @index: index of node
  * Return: value of nth node else NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
