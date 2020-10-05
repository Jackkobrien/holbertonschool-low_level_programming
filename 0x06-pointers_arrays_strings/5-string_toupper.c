#include "holberton.h"
/**
 *string_toupper - make string big
 *@a: string tomke big
 *Return: a
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = (a[i] - 32);
		i++;
	}
	return (a);
}
