#include <stdio.h>
/**
 * main- prints the alphabet in lowercase backwards
 *
 * Return: nothing
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
