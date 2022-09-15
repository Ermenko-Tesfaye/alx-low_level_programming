#include "main.h"
/**
 * print_line - a fun.. that drows a straight lin in the terminal
 * @n: number of times the char _ to print
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar(10);
}
