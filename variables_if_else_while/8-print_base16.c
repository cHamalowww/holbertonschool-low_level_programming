#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char numalph;

	for (numalph = '0'; numalph <= '9'; numalph++)
		putchar(numalph);
	for (numalph = 'a'; numalph <= 'f'; numalph++)
		putchar(numalph);
	putchar('\n');
	return (0);
}
