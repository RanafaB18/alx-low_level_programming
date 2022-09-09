#include <stdio.h>
/**
* main - Entry
*
* Return: 0 if successful
*/
int main(void)
{
	char alphabet;
	int count = 122;

	while (count > 96)
	{
		alphabet = count;
		putchar(alphabet);
		count--;
	}
	putchar(10);
	return (0);
}
