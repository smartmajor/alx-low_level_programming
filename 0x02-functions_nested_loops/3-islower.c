#include "main.h"

/**
 * _islower - function prints lower case
 * @c: Parameter to be printed
 * Return: 1 (Success)
 */

int _islower(int c)
{
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
