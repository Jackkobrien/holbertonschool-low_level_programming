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
	int f;
	int p1;
	int p2;
	int p3;

	for (f = '0'; f <= '9'; f++)
	{
		p3 = f;
		for (i = '0'; i <= '9'; i++)
		{
			p2 = i;
			for (j = '0'; j <= '9'; j++)
			{
				p1 = j;
				if (p1 == p2 || p1 == p3 || p2 == p3)
					continue;
				else if (p3 > p2 || p2 > p1)
					continue;
				putchar(p3);
				putchar(p2);
				putchar(p1);
				if (p1 == '9' && p2 == '8' && p3 == '7')
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
