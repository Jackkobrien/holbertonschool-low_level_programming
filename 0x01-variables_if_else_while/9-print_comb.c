#include <stdio.h>
/**
 * main - prints combo 1 digit numbers ascending
 *
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
