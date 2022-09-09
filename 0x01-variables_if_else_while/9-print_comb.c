#include <stdio.h>
/**
* main - Entry
*
* Return: 0 if succesful
*/
int main(void)
{
	int count = 48;

	while (count < 58)
	{
		putchar(count);
		if (count != 57)
		{
			putchar(44);
			putchar(' ');
		}
		count++;
	}
	putchar(10);
	return (0);
}
