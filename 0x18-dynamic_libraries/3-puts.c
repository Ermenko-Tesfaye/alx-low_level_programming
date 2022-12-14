#include "main.h"
/**
 * _puts - a fun.. that prints out a string followed by \n
 * @str: character pointer of astring (string literal)
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
