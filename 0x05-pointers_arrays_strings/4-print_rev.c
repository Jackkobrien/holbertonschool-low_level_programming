#include "holberton.h"
/**
 * print_rev - prints a string s in reverse
 *@s: pointer to a string s
 *Return: 0
 */
void print_rev(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	len--;
	s--;

	while (len >= 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
