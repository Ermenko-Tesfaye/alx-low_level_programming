#include "main.h"
/**
 * print_mynumber - a function that print only positives
 * @n: int to be print
 */
void print_mynumber(int n)
{
	if (n > 9)
		print_mynumber(n / 10);
	_putchar((n % 10) + 48);
}
/**
 * print_number - a function print an intiger
 * @n: int to be print
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_mynumber(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
		print_mynumber(n);
	}
}
