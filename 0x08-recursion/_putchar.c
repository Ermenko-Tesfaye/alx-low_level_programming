#include <unistd.h>
/**
 * _putchar - a fun.. that puts a char to STDOUT
 * @c: char to be printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
