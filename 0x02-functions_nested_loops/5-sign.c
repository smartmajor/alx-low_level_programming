#include "main.h"

/**
 * print_sign - function prints numerical signs
 * @n: parameter to be printed
 * Return: 0 if false, 1 if greater and -1 if lower
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
