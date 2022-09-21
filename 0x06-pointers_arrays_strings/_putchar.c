#include <unistd.h>
/**
 * _putchar - a function to write a char
 * @c: char to be print
 * Return: always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
