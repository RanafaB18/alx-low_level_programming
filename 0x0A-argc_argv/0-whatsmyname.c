#include <stdio.h>
/**
* main - prints its own name
* @argc: number of commandline arguments
* @argv: array of commandline arguments
* Return: 0 if successful
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

