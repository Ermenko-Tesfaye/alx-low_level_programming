#include <unistd.h>
/**
 * _putchar - a fun.. that write char's to STDOUT
 * @c: char to put
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
