#include <stdio.h>
/**
 * main - a fun.. that prints number of arguments
 * @argc: number of argument
 * @argv: an array of a command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
