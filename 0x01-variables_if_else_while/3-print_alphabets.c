#include <stdio.h>
#include <string.h>
/**
 * main - Prints the alphabet lower and upper and a newline
 *
 * Return: 0
 */
int main(void)
{
	int i;

	char alphabet[26];

	char alphaupper[26];

	alphabet[0] = 'a';

	alphaupper[0] = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
		alphabet[i + 1] = alphabet[i] + 1;
	}
	for (i = 0; i < 27; i++)
	{
		if (i == 26)
			alphaupper[i] = '\n';

		putchar(alphaupper[i]);
		alphaupper[i + 1] = alphaupper[i] + 1;
	}
	return (0);
}
