#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - doc for function main goes there
 * Return: 0
 */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	printf("Last digit of %d is %d ", n, mod);
	if (mod > 5)
		printf("and is greter than 5\n");
	if (mod == 0)
		printf("and is 0\n");
	if (mod < 6 && mod != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
