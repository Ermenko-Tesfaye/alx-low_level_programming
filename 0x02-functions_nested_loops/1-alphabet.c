#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase.
 * Return: Non return function
 */
void print_alphabet(void)
{
	int alp = 97;

	while (alp != 123)
		_putchar(alp++);
	_putchar('\n');
}
