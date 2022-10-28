#include "main.h"
/**
 * binary_to_uint - convert binary to an unsigned int
 * @b: pointer to string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			value = (value << 1) | 1;
		}
		else if (b[i] == '0')
		{
			value = value << 1;
		}
		else{
			return (0);
		}
	}
	return (value);
}
