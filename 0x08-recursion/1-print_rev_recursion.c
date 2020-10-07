#include "holberton.h"
/**
 *_print_rev_recursion - prints s in reverse
 *@s: str to print
 *Return: null
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return;
}