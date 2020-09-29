#include "holberton.h"
/**
 * rev_string - reverses a string
 *@s: pointer s to a string
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int i;
	int len;

	len = 0;
	i = 0;

	while (s[len] != '\0' && s[len + 1] != '\0')
	{
		len++;
	}
	while (i <= len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}
}
