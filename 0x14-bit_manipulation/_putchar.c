#include <unistd.h>
/**
 * _putchar - a function that print a char
 * @c: char to be printed
 * Return: a
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
