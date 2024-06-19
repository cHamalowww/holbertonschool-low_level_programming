#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for ( n>0 )
		printf("is positive: %d", n);
	for ( n<0 )
		printf("is negative: %d", n);
	for ( n=0 )
		printf("is zero: %d", n);
	return (0);
}
