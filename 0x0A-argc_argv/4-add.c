#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 on success and 1 on failuer
 */
int main(int argc, char *argv[])
{
	int i, x = 0, y;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i][0]))
		{
			y = atoi(argv[i]);
			x += y;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", x);
	return (0);
}
