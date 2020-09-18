#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main-Prints a random number, and lists its final digit
 *
 *Return: Nothing
 */

int main(void)
{
	int n;
	int fdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	fdigit = n % 10;
	if (fdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, fdigit);
	else if (fdigit < 6 && fdigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, fdigit);
	else if (fdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, fdigit);

	return (0);
}
