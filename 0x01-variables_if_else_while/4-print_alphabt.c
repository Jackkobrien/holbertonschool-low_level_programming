#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- prints the alphabet in lowercase excluding q and e
 *
 * Return: nothing
 */

int main(void)
{
	int i;
	char alphabet[27];

	i = 0;
	alphabet[0] = 'a';

	for (i = 0; i < 27; i++)
	{
		alphabet[i + 1] = alphabet[i] + 1;
		if (alphabet[i] == 'q' || alphabet[i] == 'e')
			continue;
		if (i == 26)
			alphabet[i] = '\n';

		putchar(alphabet[i]);
	}
	return (0);
}
