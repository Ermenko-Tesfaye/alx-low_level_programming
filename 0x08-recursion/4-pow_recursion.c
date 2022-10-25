#include "main.h"
/**
 * _pow_recursion - a fun.. that returns the value of x raised to the pow of y
 * @x: base to be raised by y
 * @y: exponent
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
