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

	for (i = 0; i <= 6; n++)

	if (i == 0)
		printf("Last digit of 'i' is %d and is 0 \n", n);
	else if (i <= 6)
		printf("Last digit of 'i' is %d and is less than 6 and 0 \n", n);
	else
		printf("Last digit of 'i' is %d and is greater than 5 \n", n);

	return (0);
}
