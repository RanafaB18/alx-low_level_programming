#include "main.h"
#include <stdlib.h>
/**
* _strdup - Creates a pointer to a new string
* @str : string
*
* Return: NULL if str is NULL else a pointer to new duplicate of str
*/
char *_strdup(char *str)
{
	char *ptr;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		;
	}

	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		*(ptr + count) = str[count];
	}

	return (ptr);
}
