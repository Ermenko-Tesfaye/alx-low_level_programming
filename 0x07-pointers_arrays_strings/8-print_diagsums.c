#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a fun.. that prints the sum of the two diagonals of matrix
 * @a: pointer to a matrix
 * @size: the size of squered array
 */
void print_diagsums(int *a, int size)
{
	long int fir = 0, sec = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		fir += *(a + (i * size) + i);
		sec += *(a + (i * size) + (size - i - 1));
	}
	printf("%ld, %ld\n", fir, sec);
}
