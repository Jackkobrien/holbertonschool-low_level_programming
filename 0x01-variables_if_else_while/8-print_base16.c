#include<stdio.h>
/**
 * main - Prints hex numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	int f;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (f = 'a'; f <= 'f'; f++)
		putchar(f);

	putchar('\n');
	return (0);
}
