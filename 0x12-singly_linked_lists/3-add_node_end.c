#include "lists.h"
/**
 * add_node_end - add new node to end of list
 * @head: first node of list
 * @str: string data of linked list
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
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
	new_node->len = length;
	new_node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
