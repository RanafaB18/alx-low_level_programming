#include "lists.h"
/**
 * add_dnodeint_end - add a new node to the end of list
 * @head: head of list
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!newNode)
	{
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}
