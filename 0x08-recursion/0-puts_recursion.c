#include "main.h"
/**
 * _puts_recursion - a fun.. that prints a string, followed by new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
