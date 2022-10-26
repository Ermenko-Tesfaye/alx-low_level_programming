#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: a char to be checked
 * Return: 1 if c is digit and 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
