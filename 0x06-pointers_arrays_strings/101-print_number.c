#include "main.h"
/**
 * print_my_num - recursion function to print number
 * @n: value to print
 */
void print_my_num(int n)
{
	if (n > 9)
		print_my_num(n / 10);
	_putchar(n % 10 + 48);
}
/**
 * print_number - a fun.. that prints an integer
 * @n: integer value n
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = -147483648;
		}
		n *= -1;
	}
	print_my_num(n);
}
