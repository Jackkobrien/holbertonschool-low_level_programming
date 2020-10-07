#include "holberton.h"
/**
 *factorial - takes facotrial of n
 *@n: any interger
 *Return: !n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return(n * factorial(n - 1));
}
