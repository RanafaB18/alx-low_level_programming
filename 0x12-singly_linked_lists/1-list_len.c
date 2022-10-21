#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t elementNum = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		elementNum++;
	}
	return (elementNum);
}
