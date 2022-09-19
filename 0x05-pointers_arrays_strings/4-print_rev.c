#include "main.h"
/**
 * print_rev - a fun.. that prints a string, in reverse, followed \n
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	s--;
	while (i)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar(10);
}
