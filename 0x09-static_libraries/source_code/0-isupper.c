#include <stdio.h>
/**
* _isupper - Checks for uppercase character.
* @c: input character
*
* Return: 1 if c is uppercase or else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
