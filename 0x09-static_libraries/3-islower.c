#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _islower - function checks for lowercase character
 * @c: character to be checked
 * Return: 1 if c is lowercase, 0 if  otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
