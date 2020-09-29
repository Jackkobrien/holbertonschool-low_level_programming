#include "holberton.h"
/**
 * puts2 - prints every other character of a string str
 *@str: a pointer to a string
 * Return: 0
 */
void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0' && str[len + 1] != '\0')
	{
		if (len == 0)
		{
			_putchar(str[0]);
			len++;
			continue;
		}

		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
