#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates memory
 *@ptr : pointer to memory previously allocated
 *@old_size : size in bytes of ptr
 *@new_size : size in bytes of new memory block
 *
 *Return: pointer to new memory block

 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	free(ptr);
	ptr = malloc(new_size);
	
	return (ptr);
}
