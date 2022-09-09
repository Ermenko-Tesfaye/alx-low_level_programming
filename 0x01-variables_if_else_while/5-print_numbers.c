#include <stdio.h>
/**
 * main - main fun..
 * Return: 0
 */
int main(void)
{
	char num = '0';

	while (num != ':')
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
