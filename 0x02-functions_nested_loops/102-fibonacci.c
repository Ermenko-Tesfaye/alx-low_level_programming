#include <stdio.h>
/**
 * main - a program prints the first 50nfibonacci numbers, start with 1 and 2
 * Return: 0
 */
int main(void)
{
	long int i = 1, j = 2, count, temp;

	printf("1, 2, ");
	for (count = 0; count < 48; count++)
	{
		temp = i + j;
		if (count != 47)
			printf("%lu, ", temp);
		else
			printf("%lu", temp);
		i = j;
		j = temp;
	}
	putchar('\n');
	return (0);
}
