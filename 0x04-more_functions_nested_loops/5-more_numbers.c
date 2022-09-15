#include "main.h"
/**
 * print_mynum - print intiger number
 * @c: intiger to print
 */
void print_mynum(int c)
{
	if (c > 9)
		print_mynum(c / 10);
	_putchar((c % 10) + '0');
}
/**
 * more_numbers - a fun.. print 10 times nums from 0 - 14 followed new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
			print_mynum(j);
		_putchar(10);
	}
}
