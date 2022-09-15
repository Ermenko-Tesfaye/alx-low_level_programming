#include <stdio.h>
/**
 * main - a program that factor prine number
 * Return: 0
 */
int main(void)
{
	long int i = 2, num = 612852475143;

	while (num > 1)
	{
		if (num % i == 0)
			num /= i;
		else
			i++;
	}
	printf("%ld\n", i);
	return (0);
}
