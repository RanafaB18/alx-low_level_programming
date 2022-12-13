#include <stdio.h>
/**
 * rand - returns each of the clients numbers when called
 * Return: 0
 */
int rand(void)
{
	static int val = -1;
	int a, m, random, seed = 1234;
	
	printf("%d\n", val);
	val++;
	if (val == 0)
	{
		return (9);
	}
	if (val == 1)
	{
		return (8);
	}
	if (val == 2)
	{
		return (10);
	}
	if (val == 3)
	{
		return (24);
	}
	if (val == 4)
	{
		return (75);
	}
	if (val == 5)
	{
		return (9);
	}
	a = 16807;
	m = 214748;
	seed = (a * seed) % m;
	random = seed / m;
	return (random);
}
