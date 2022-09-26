#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a fun.. that prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer to a matrix
 * @size: the size of squered array
 */
void print_diagsums(int *a, int size)
{
	long long int fir, sec;
	int i;

	for (i = 0; i < size; i++)
	{
		fir += a[i][i];
		sec += a[i][size - i - 1];
	}
	printf("%lld, %lld\n", fir, sec);
}
