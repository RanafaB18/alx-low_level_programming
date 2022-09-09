#include <stdio.h>
/**
* main - Entry
*
* Return: 0 if successful
*/
int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}
	putchar(10);
	return (0);
}
