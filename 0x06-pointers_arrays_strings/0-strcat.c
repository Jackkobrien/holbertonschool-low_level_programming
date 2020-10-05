#include "holberton.h"
/**
 *_strcat - concatenates src to dest
 *@dest: str to be appended to
 *@src: str to be appended
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
