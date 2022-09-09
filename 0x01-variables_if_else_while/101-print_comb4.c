#include <stdio.h>
/**
 * main - main fun..
 * Return: 0
 */
int main(void)
{
	int num1 = 48, num2 = 49, num3 = 50;

	while (num1 < 56)
	{
		while (num2 < 57)
		{
			while (num3 < 58)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3++);
				if (!(num1 == 55 && num2 == 56 && num3 == 58))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1 + 1;
		num3 = num1 + 2;
	}
	putchar('\n');
	return (0);
}
