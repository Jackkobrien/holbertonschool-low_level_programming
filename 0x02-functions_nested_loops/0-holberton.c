#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * main- Prints Holberton
 *
 * Return: 0
 */
int main(void)
{
	char holberton[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');

	return (0);
}
