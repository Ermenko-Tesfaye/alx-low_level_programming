#include <stdio.h>
/**
 * main - a program prints the first 98 fibonacci numbers, start with 1 and 2
 * Return: 0
 */
int main(void)
{
	long double i = 1, j = 2, count, temp;

	printf("1, 2, ");
	for (count = 0; count < 96; count++)
	{
		temp = i + j;
		if (count != 95)
			printf("%.0Lf, ", temp);
		else
			printf("%.0Lf", temp);
		i = j;
		j = temp;
	}
	putchar('\n');
	return (0);
}
