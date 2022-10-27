#include "main.h"
/**
 * set_bit - a fun.. that sets the value of a bit to 1 at a given index
 * @n: intiger to be edited
 * @index: index to set 1
 * Return: 1 on success and -1 on failuer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
