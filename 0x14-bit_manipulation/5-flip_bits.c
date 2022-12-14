#include "main.h"
/**
 * flip_bits - a fun.. that returns the number of bits you would need to flip
 * @n: number to be check
 * @m: number
 * Return: number of bit to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
