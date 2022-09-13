#include "main.h"
/**
 * print_alphabet_x10 - a fun.. that print 10 times kthe alphabet
 * Return: Non return fun..
 */
void print_alphabet_x10(void)
{
	int alp, i;

	for (i = 0; i < 10; i++)
	{
		alp = 97;
		while (alp != 123)
			_putchar(alp++);
		_putchar('\n');
	}
}
