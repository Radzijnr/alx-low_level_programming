#include <stdio.h>

/**
 * main - prints all single numbers of base 10 starting from 0,
 * new line, using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
