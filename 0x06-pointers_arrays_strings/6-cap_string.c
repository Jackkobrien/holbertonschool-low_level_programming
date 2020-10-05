#include "holberton.h"
/**
 *cap_string - capitalizes a string
 *@a:string
 *Return: a
 */
char *cap_string(char *a)
{
	int i = 0;
	int j = 0;
	char separators[] = {' ', 9, '\n', ',', ';', '.', '!', '?', '"', '(',
			     ')', '{', '}', '\0'};

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0)
				a[i] = a[i] - 32;
			for (j = 0; separators[j] != '\0'; j++)
				if (a[i - 1] == separators[j])
					a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
