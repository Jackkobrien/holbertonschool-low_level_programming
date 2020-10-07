#include "holberton.h"
/**
 *help - helps _sqrt
 *
 *@n: num to be rooted
 *@b:1
 *Return: sqrt of n
 */
int help(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (n == b * b)
		return (b);
	return (help(n, (b + 1)));
}
/**
 *_sqrt_recursion - takes sqrt recursively
 *@n: num to be rooted
 *Return: sqrt n
 */
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}
