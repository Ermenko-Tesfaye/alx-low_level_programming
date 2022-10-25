#include "main.h"
/**
 * _strlen_recursion - a fun.. that returns the length of string
 * @s: string to be counted
 * Return: number of char
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
