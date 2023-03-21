#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int b;
	char c;

	for (b = 1; b <= 10; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(b);
			_putchar('\n');
		}
	}

}
