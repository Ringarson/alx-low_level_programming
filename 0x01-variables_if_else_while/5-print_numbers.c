#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Assigns a random number to the variable n and prints its last digit.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();

	printf("Random number: %d\n", n);
	printf("Last digit: %d\n", n % 10);

	return (0);
}
