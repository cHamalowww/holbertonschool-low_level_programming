#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	// in output in 32-bit and 64-bit gcc
	printf("%u\n",sizeof(int));
	printf("%u\n",sizeof(char));
	printf("%u\n",sizeof(long int));
	printf("%u\n",sizeof(long long int));
	printf("%u\n",sizeof(float));
	return (0);
}
