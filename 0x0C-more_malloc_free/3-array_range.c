#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min : minimum value of array
 * @max : maximum value of array
 *
 * Return: pointer to allocated memory containing array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
