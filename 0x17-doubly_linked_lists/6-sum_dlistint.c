#include "lists.h"
/**
  * sum_dlistint - get sum of all values in list
  * @head: head of list
  * Return: 0 if list is empty else total
  */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
