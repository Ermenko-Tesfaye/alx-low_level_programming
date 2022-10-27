#include "main.h"
/**
 * print_binary - a fun.. that prints the binary representation of a number
 * @n: number to be converted to binary
 * Return: non return function
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	_putchar((n % 2) + '0');
}
