#include "main.h"
/**
 * _print_rev_recursion - a fun.. that print a string in reverse
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}