#include "lists.h"
/**
  * add_dnodeint - adds node to beginning of list
  * @h: head of list
  * @n: new node value
  * Return: address of new node on success else NULL
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
