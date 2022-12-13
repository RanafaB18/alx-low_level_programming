#include <stdio.h>
#include <stdlib.h>
/**
 * rand - returns each of the clients numbers when called
 * Return: 0
 */
int rand(void)
{
	static int val = -1;
	int a, m, random, seed = 1234;
	
	val++;
	if (val == 0)
	{
		printf("--> ");
		exit(0);
	}
	if (val == 1)
	{
		printf("Please ");
		exit(0);
	}
	if (val == 2)
	{
		printf("make ");
		exit(0);
	}
	if (val == 3)
	{
		printf("me ");
		exit(0);
	}
	if (val == 4)
	{
		printf("win");
		exit(0);
	}
	if (val == 5)
	{
		printf("!\n");
		exit (0);
	}
	a = 16807;
	m = 214748;
	seed = (a * seed) % m;
	random = seed / m;
	return (random);
}
