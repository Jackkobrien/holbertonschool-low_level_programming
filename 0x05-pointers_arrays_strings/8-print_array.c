#include "holberton.h"
/**
 * print_array - prints n elements of array denoted by a
 *@a: array
 *@n: elements of the array to print
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		else
			printf(", ");
	}

	printf("\n");
}
