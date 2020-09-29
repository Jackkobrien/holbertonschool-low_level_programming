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

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		for (n = len / 2; n <= len; n++)
			_putchar(str[n]);
	if (len % 2 != 0)
		for (n = (len - 1) / 2; n <= len; n++)
			_putchar(str[n]);
	_putchar('\n');
}
