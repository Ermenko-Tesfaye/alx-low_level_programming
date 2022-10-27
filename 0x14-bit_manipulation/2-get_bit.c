#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at agiven index
 * @n: number to be cheked
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (n > 0)
			n /= 2;
		else
		{
			return (-1);
		}
	}
	return (n % 2);
}
