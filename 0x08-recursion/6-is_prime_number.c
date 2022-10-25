#include "main.h"
/**
 * prime_or_not - to check prime number using recursion
 * @n: number to check
 * @i: value for iterative check
 * Return: 0 or 1
 */
int prime_or_not(int n, int i)
{
	if (n != 1)
	{
		if (n == i)
			return (1);
		else if (n % i == 0 || n <= 1)
			return (0);
		else
			return (prime_or_not(n, i + 1));
	}
	return (0);
}
/**
 * is_prime_number - a fun.. returns 1 if input i prime or 0 if not
 * @n: the number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	return (prime_or_not(n, i));
}
