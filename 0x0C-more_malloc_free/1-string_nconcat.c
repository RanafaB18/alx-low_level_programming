#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * @n : number of bytes to take from s2
 * Return: pointer to allocated memory contain
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Count, s2Count, totalCount, i;
	char *ptr;

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
	if (n >= s2Count)
	{
		n = s2Count;
	}
	totalCount = s1Count + n;
	ptr = malloc(totalCount + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < totalCount; i++)
	{
		if (i < s1Count)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - s1Count];
	}
	ptr[i] = '\0';
	return (ptr);
}
