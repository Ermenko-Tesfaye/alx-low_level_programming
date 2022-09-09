#include <stdio.h>
/**
 * main - main fun..
 * Return: 0
 */
int main(void)
{
	int num1 = 48, num2 = 49;

	while (num1 < 57)
	{
		while (num2 < 58)
		{
			putchar(num1);
			putchar(num2++);
			if (!(num1 == 56 && num2 == 58))
			{
				putchar(',');
				putchar(' ');
			}
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
