#include <stdio.h>
/**
 * main - prints all unique combinations of digits from 00 to 99
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
			if (p1 == p2)
				continue;
			if (p2 > p1)
				continue;
			putchar(p2);
			putchar(p1);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
