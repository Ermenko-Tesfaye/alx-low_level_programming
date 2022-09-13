#include "main.h"
/**
 * print_num - print intiger number
 * @c: int value to print
 */
void print_num(int c)
{
	if (c > 9)
		print_num(c / 10);
	_putchar((c % 10) + '0');
}
/**
 * main - a program to compute and print the sum of all multiple of 3 & 5
 * Return: always 0
 */
int main(void)
{
	int mult = 0, num = 0;

	while (++num < 1024)
		if ((num % 3) == 0 || (num % 5) == 0)
			mult += num;
	print_num(mult);
	_putchar('\n');
}
