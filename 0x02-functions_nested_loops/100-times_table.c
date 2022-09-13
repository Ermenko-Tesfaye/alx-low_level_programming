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
 * print_times_table - a fun.. that prints the n times table
 * @n: number of n x n timetable
 * Return: Non return function
 */
void print_times_table(int n)
{
	int i, j, tot;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			tot = i * j;
			if (tot <= 9 && j != 0)
				_putchar(' ');
			if (tot <= 99 && j != 0)
				_putchar(' ');
			print_num(tot);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
