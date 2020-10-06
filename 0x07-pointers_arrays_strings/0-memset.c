#include "holberton.h"
/**
 *_memset - does memset
 *@s: string to be memed
 *@b: byte to replace with
 *@n: number of bytes
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
