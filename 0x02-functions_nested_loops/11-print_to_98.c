#include "main.h"
/**
 * print_num - print number
 * @c: int to print using recursion
 */
void print_num(int c)
{
	if (c > 9)
		print_num(c / 10);
	_putchar((c % 10) + '0');
}
/**
 * print_to_98 - a fun.. that prints all natural numbers from n to 98
 * @n: integer value of n
 * Return: Non return fun..
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
				print_num(-1 * n);
			}
			else
				print_num(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			print_num(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		print_num(98);
	}
	_putchar('\n');
}
