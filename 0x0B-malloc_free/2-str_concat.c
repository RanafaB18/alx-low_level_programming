#include "main.h"
#include <stdlib.h>
/**
* str_concat - Concatenate strings
* @s1 : first string
* @s2 : second string
*
* Return: NULL if error occurs else a pointer to the concatenated strings
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int s1Count, s2Count, totalCount, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1Count = 0; s1[s1Count] != '\0'; s1Count++)
	{
		;
	}
	for (s2Count = 0; s2[s2Count] != '\0'; s2Count++)
	{
		;
	}
	totalCount = s1Count + s2Count;
	ptr = malloc(sizeof(char) * (totalCount + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i <= totalCount; i++)
	{
		if (i < s1Count)
		{
			*(ptr + i) = s1[i];
		}
		else
		{
			*(ptr + i) = s2[i - s1Count];
		}
	}
	return (ptr);
}
