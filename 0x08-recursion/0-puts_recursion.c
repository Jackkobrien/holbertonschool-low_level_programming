#include "holberton.h"
/**
 *_puits_recursion - prints a function recursively
 *@s: str to print
 *Return: null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
	return;
}
