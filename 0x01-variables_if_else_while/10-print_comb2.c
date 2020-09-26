#include <stdio.h>
/**
 * main - prints all numbers from 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int p1;
	int p2;

	for (i = '0'; i <= '9'; i++)
	{
		p2 = i;
		for (j = '0'; j <= '9'; j++)
		{
			p1 = j;
			putchar(p2);
			putchar(p1);
			if (i == '9' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
