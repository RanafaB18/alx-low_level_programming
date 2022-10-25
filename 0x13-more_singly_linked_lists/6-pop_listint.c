#include "lists.h"
/**
 * pop_listint - deletes the head node of list
 * @head: first node
 *
 *Return: head node data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
