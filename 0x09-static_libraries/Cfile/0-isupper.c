#include "main.h"
/**
 * _isupper - a fun..that check for upper case
 * @c: the char to check
 * Return: 1 if 'c' is upper or 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
