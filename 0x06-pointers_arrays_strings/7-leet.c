#include "holberton.h"
/**
 *leet - makes a string elite
 *@a: string to make leet
 *Return: leet string
 */
char *leet(char *a)
{
	int i = 0;
	int j = 0;
	leet_index[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	leet_codex[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	while (a[i] != '\0')
	{
		while (leet_index[j] != '\0')
			if (a[i] == leet_index[j])
				a[i] = leet_codex[j];
		i++;
	}
	return (a);
}
