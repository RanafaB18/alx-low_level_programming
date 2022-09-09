#include <stdio.h>
/**
* main - Entry
*
* Return: 0 if successful
*/
int main(void)
{
	char alphabet;
	int count = 48;

	while (count < 58)
	{
		alphabet = count;
		putchar(alphabet);
		count++;
	}
	count = 97;
	while (count < 103)
	{
		alphabet = count;
		putchar(alphabet);
		count++;
	}
	putchar(10);
	return (0);
}
