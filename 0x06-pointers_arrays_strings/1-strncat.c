#include "holberton.h"
/**
 *_strncat - cat up to n bytes of str src to str dest
 *@dest:string to be cat to
 *@src:string to cat
 *@n: number of bytes to cat
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';
	return (dest);
}
