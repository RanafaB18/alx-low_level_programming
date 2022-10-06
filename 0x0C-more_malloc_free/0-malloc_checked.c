#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 * @b : int
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
