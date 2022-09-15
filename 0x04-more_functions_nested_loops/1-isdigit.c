#include <stdio.h>
/**
* _isdigit - Checks for a digit.
* @c: input character
*
* Return: 1 if c is a digit or else 0
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
