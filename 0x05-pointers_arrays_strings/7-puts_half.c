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

	while (*(str + len) != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else if (len % 2 != 0)
		n = (len - 1) / 2;
	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
