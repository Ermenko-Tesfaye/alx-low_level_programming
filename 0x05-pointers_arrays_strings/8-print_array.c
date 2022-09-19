#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * followed by a new line.
 * @a: an array of intiger;
 * @n: numbr of element of array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
		{
			printf(", ");
		}
	}
	putchar(10);
}
