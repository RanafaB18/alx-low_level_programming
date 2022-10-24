#include "lists.h"
/**
 * add_nodeint- adds a new node at the beginning of a list
 * @h: linkedlist
 * Return: address of new element if successful, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
