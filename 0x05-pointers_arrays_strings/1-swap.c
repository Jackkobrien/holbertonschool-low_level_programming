#include <stdio.h>
/**
 * swap_int - swaps values of intergers a and b given their pointers
 * @a: two given pointers to ingtergers
 * @b: two given pointers
* Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
