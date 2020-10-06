#include "holberton.h"
/**
 *
 *
 *
 *Return: s - null if c not found
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
