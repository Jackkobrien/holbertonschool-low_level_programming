#include "holberton.h"
/**
 *_memcpy - copies n bytes from src to dest
 *@dest: copy to
 *@src: source of bytes
 *@n: bytes to cpy
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return(dest);
}
