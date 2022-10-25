#include "main.h"
/**
 * size_of_str - a fun.. to count char
 * @s: string to be checked
 * Return: string length
 */
int size_of_str(char *s)
{
	if (*s)
	{
		s++;
		return (1 + size_of_str(s));
	}
	return (0);
}
/**
 * palindrome_check - checkes for palindrome
 * @s: string to check
 * @size: string length
 * @i: index from the start
 * Return: 1 or 0
 */
int palindrome_check(char *s, int size, int i)
{
	if (i >= size)
		return (1);
	if (s[size] == s[i])
		return (palindrome_check(s, size - 1, i + 1));
	return (0);
}
/**
 * is_palindrome - a fun to check for palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrom or 0 if not
 */
int is_palindrome(char *s)
{
	int size = size_of_str(s);
	int i = 0;

	return (palindrome_check(s, size - 1, i));
}
