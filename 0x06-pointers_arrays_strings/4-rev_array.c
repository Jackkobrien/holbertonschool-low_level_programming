#include "holberton.h"
/**
 *reverse_array - reverses an array a
 *@a: array to reverse
 *@n: number of elements in array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int len = n - 1;
	int i = 0;
	int temp;

	while (i <= len)
	{
		temp = a[i];
		a[i] = a[len];
		a[len] = temp;

		i++;
		len--;
	}
}
