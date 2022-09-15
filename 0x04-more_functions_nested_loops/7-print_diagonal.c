#include "main.h"
/**
 * print_diagonal - a fun.. that drow diagonal line on the terminal
 * @n: tne number of time the char '\' to print
 */
void print_diagonal(int n)
{
	int i, space = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (space--)
				_putchar(' ');
			_putchar('\\');
			_putchar(10);
			space = i + 1;
		}
	}
	else
		_putchar(10);
}
