#include "holberton.h"
/**
 *solver - expansion of main fn with 2 variables
 *@n: n from main fn
 *@a: 1
 * Return: 1 if n prime 0 if not
 */
int solver(int n, int a)
{
	if  (n < 0)
		n = n * -1;
	if (n == 0)
		return (1);
	if (n == 1)
		return (0);
	if (a == 1)
		return (1);
	if (n % a == 0 && n != a)
		return (0);
	return (solver(n, a - 1));

}
/**
 *is_prime_number - computes if a number is prime
 *@n: num to compute
 * Return: solver
 */
int is_prime_number(int n)
{
	return (solver(n, n));
}
