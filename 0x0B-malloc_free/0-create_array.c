#include "main.h"
#include <stdlib.h>
/**
* create_array - Creates an array of char
* @size : size of array
* @c : character
*
* Return: NULL if size = 0 else a pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
