#include <stdio.h>
#include <stdlib.h>
/**
* main - prints result from the multiplication of two numbers
* @argc: number of commandline arguments
* @argv: array of commandline arguments
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[0]) * atoi(argv[1]));
	return (0);
}
