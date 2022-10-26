#include "main.h"
/**
 * _abs - a fun.. that computes the absolute value of an int
 * @c: value to compute absulet value
 * Return: the absolute value of int
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
