#include <stdio.h>
/*
 * main - Prints all unique combinations of 2 2 digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i1, i2, i3, i4;
	int p1, p2, p3, p4;
	int printcommaspace;

	for (i1 = '0'; i1 <= '9'; i1++)
	{
		p1 = i1;
		for (i2 = '0'; i2 <= '9'; i2++)
		{
			p2 = i2;
			for (i3 = '0'; i3 <= '9'; i3++)
			{
				p3 = i3;
				for (i4 = '0'; i4 <= '9'; i4++)
				{
					p4 = i4;
					if (i1 == '9' && i4 == '9')
						printcommaspace = 0;
					else
						printcommaspace = 1;

					if (p3 == p4 || p3 > p4)
						continue;
					else if (p1 == p2 || p1 > p2)
						continue;
					else if (p2 > p3 || p2 > p4)
						continue;
					else if (p1 > p3 || p1 > p4)
						continue;
					else
					{
						putchar(p1);
						putchar(p2);
						putchar(' ');
						putchar(p3);
						putchar(p4);
						if (printcommaspace == 1)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
}
