#include <stdio.h>
/**
 * main - main fun..
 * Return: 0
 */
int main(void)
{
	int num1 = 48, num2, num3, num4, tmp1, tmp2;


	while (num1 < 57)
	{
		num2 = 48;
		while (num2 < 58)
		{
			num3 = 48;
			while (num3 < 57)
			{
				num4 = 48;
				while (num4 < 58)
				{
					tmp1 = (num1 * 10) + num2;
					tmp2 = (num3 * 10) + num4;
					if (tmp1 >= tmp2)
						continue;
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4++);
					if (!(num1 == 57 && num2 == 56 && num3 == 57 && num4 == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
