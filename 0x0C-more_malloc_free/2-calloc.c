#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb : number of bytes
 * @size : size in bytes of datatype
 *
 * Return: pointer to allocated memory containing array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
