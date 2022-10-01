#include <stdio.h>
/**
* main - prints the number of arguments
* @argc: number of commandline arguments
* @argv: array of commandline arguments
* Return: 0 if successful
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%s\n", argc - 1);
	return (0);
}

