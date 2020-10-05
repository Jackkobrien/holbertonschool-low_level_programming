#include "holberton.h"
/**
 *_strcpy - copies src to dest
 *@dest: location for string to be copied to
 *@src: source string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}