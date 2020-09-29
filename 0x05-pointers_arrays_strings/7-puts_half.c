#include "holberton.h"
#include <stdio.h>
/**
 *puts_half - prints seconds half of a function
 *@str: a string
 * Return: 0
 */
void puts_half(char *str)
{
	int len;

	int n;

	int j;

	len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;
	if (len % 2 != 0)
		n = (len - 1) / 2;
	for (j = len - n; j < len; j++)
		_putchar(str[j]);
	_putchar('\n');
}
