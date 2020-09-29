/**
 * _puts - is functionally the same as puts
 *@str: pointer to string to put
 * Return: 0
*/
#include <stdio.h>
#include "holberton.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
