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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
