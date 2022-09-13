#include "main.h"
#include <limits.h>
/**
 * print_last_digit - a fun.. that print the last digit of a num
 * @c: int to be evaluate
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int rem;

	if (c == INT_MIN)
		c = c + 1;
	if (c < 0)
		c *= -1;
	rem = c % 10;
	_putchar(rem + 48);
	return (rem);
}
