#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Creates a pointer to a 2 dimensional array of integers
 * @width : number of columns
 * @height : number of rows
 *
 * Return: NULL if error occurs else a pointer to the concatenated strings
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
