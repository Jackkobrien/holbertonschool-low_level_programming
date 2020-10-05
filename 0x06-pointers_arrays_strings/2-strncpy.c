#include "holberton.h"
/**
 *_strcpy - copies a string
 *@dest: location to be copied to
 *@src: string to be copied
 *@n: number of bytes to copy
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	src[i] = '\0';

	return (dest);
}
