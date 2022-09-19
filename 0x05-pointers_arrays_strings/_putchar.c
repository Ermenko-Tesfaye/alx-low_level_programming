#include <unistd.h>
/**
 * _putchar - a fun.. to print a char to STDOUT
 * @c: char to be print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
