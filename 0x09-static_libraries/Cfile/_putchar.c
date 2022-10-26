#include <unistd.h>
#include "main.h"
/**
 * _putchar - a fun.. put achar
 * @c: char to print
 * Return: 1 for a char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
