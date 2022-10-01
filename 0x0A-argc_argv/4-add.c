#include <stdio.h>
#include <ctype.h>
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
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	return (0);
}

