#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: program prints alphabet 10 times without stdlib
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
		_putchar(i);
		}
	       _putchar('\n');
	}
}
