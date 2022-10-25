#include "main.h"
/**
 * rec - recursion
 * @n: value
 * @i: value to check
 * Return: squrt
 */
int rec(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	else
		return (rec(n, i + 1));
}
/**
 * _sqrt_recursion - a fun.. that returns the natural suare root of a number
 * @n: a number to be sqrt
 * Return: natural sqrt or -1 if not
 */
int _sqrt_recursion(int n)
{
	int i = 2;

	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (rec(n, i));
}
