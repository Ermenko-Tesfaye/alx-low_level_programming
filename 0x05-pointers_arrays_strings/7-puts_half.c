#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: a string to print
 */
void puts_half(char *str)
{
	int n = 0;

	while (*str)
	{
		n++;
		str++;
	}
	n /= 2;
	str = str - n;
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
