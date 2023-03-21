#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: program prints alphabet 10 times without stdlib
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int v;
	char g;

	for (v = 0 ; v <= 9 ; v++)
	{
		for (g = 'a' ; g <= 'z' ; g++)
		{
		_putchar(v);
		}
	       _putchar('\n');
	}
}
