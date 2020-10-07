#include "holberton.h"
/**
 *rot13 - encodes a string into ROT13
 *@a:String to be encoded into ROT13
 *Return: encoded str a
 */
char *rot13(char *a)
{
	int i = 0;
	int j = 0;
	int redundant = 0;
	char rotindex[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotcodex[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		redundant = 0;
		for (j = 0; rotindex[j] != '\0'; j++)
		{
			if (a[i] == rotindex[j] && redundant == 0)
			{
				a[i] = rotcodex[j];
				redundant = 1;
			}
		}
	}
	return (a);
}
