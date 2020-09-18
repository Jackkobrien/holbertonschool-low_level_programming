#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main- Generates a random number and tells user if it is positive, negative,
 * or zero
 *
 * Return: Nothing
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	return (0);
}
