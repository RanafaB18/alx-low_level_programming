#include <stdio.h>
/**
 *main - print 80 to 9 with no duplicate digits or combos: no 11, no 16 (61)
 *
 *Return: 0 if successful
 */
int main(void)
{
	int ones;
	int tens;
	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*one’s ten+1l*/
		{
			putchar (tens);
			putchar (ones);
			if (tens != '8' || ones != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

