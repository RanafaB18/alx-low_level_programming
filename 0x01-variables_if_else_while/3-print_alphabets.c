#include <stdio.h>
/**
* main - Entry
*
* Return: 0 if successful
*/
int main(void)
{
	char alphabet;
	int count = 97;

	while (count < 123)
	{
		alphabet = count;
		putchar(alphabet);
		count++;
	}
	count = 65;
	while (count < 91)
	{
		alphabet = count;
		putchar(alphabet);
		count++;
	}
	putchar(10);
	return (0);
}
