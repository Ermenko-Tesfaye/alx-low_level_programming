#include <stdio.h>
/**
 * main - a program prints the first 50 fibonacci numbers, start with 1 and 2
 * Return: 0
 */
int main(void)
{
	long long int i = 1, j = 2, count = 2, temp = 0;

	while (temp < 4000000)
	{
		temp = i + j;
		if (temp % 2 == 0)
			count += temp;
		i = j;
		j = temp;
	}
	printf("%lld\n", count);
	return (0);
}
