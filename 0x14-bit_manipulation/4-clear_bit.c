#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: number to be edited
 * @index: index to be set a number 0
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
