#include <stdio.h>
/**
 * main - prints 0-9 with a newline no printf
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
