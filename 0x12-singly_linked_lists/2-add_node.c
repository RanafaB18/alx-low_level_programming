#include "lists.h"
/**
 * add_node - add new node
 * @head: first node of list
 * @str: string data of linked list
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = length;
	*head = new_node;
	return (new_node);
}
