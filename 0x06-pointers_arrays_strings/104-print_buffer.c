#include "main.h"
#include <stdio.h>
/**
 * print_buffer - a fun.. that prints a buffer
 * @b: beffer pointer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if ((i % 10) == 0)
			printf("%8x ", i);
		if ((i % 10) == 0)
			putchar(10);
	}
}
