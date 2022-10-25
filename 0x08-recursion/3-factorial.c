#include "main.h"
/**
 * factorial - a fun.. that return the factorial of a given number
 * @n: integer to be factored
 * Return: factor of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
