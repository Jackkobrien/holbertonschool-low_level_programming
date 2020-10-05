#include "holberton.h"
/**
 *reverse_array - reverses an array a
 *@a: array to reverse
 *@n: number of elements in array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
		n--;
	}
}
