#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: The program prints alphabets without stdlib
 * Return: 0.
 */

void print_alphabet(void)
/* declaration of print_alphabet */
{

		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

}
