#include "main.h"
/**
 * print_triangle - a fun.. that print triangle, followed by new line
 * @size: size of a triangle
 */
void print_triangle(int size)
{
	int i, j, space, hash;

	if (size > 0)
	{
		hash = 1;
		space = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < space; j++)
				_putchar(' ');
			for (j = 0; j < hash; j++)
				_putchar('#');
			space--;
			hash++;
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
