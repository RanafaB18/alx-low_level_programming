#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: linked list
 * Return: number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t elementNum = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		elementNum++;
	}
	return (elementNum);
}
