#include "lists.h"
/**
 * get_nodeint_at_index- returns the nth node of a listint_t linked list
 * @head: first node
 * @index: position of node in list
 *
 *Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);

}
