#include <unistd.h>
/**
 * _putchar - a function puts a character to STDOUT
 * @c: the char to be printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
