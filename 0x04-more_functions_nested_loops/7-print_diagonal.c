#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i; 
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{	
			_putchar(92);
			if (i < (n - 1))
			{
				_putchar('\n');
			}
			for (j = 1; j <= i + 1; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
