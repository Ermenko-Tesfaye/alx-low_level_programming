#include "main.h"
/**
 * print_num - print number
 * @c: number to print
 */
void print_num(int c)
{
	if (c > 9)
	{
		print_num(c / 10);
	}
	_putchar((c % 10) + '0');
}
/**
 * times_table - a fun.. that prints the 9 times table, starting with 0
 * Return: Non return function
 */
void times_table(void)
{
	int i, j, tot;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			tot = i * j;
			if (tot <= 9 && j != 0)
				_putchar(' ');
			print_num(tot);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
