#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 on success and 1 on failuer
 */
int main(int argc, char *argv[])
{
	int i, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i >= 25)
	{
		coin += i / 25;
		i = i % 25;
	}
	if (i >= 10)
	{
		coin += i / 10;
		i = i % 10;
	}
	if (i >= 5)
	{
		coin += i / 5;
		i = i % 5;
	}
	if (i >= 2)
	{
		coin += i / 2;
		i = i % 2;
	}
	if (i >= 1)
		coin += i;
	printf("%d\n", coin);
	return (0);
}
