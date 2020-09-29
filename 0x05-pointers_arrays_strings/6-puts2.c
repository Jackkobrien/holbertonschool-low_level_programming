#include "holberton.h"
/**
 * puts2 - prints every other character of a string str
 *@str: a pointer to a string
 * Return: 0
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
			_putchar(str[len]);
	}
	_putchar('\n');
}
