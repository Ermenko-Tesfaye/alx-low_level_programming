#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - a program that adds positive numbers
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 on success and 1 on failuer
 */
int main(int argc, char *argv[])
{
	int i, x = 0, y;
	size_t j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		y = atoi(argv[i]);
		x += y;
	}
	printf("%d\n", x);
	return (0);
}
