#include "main.h"

/**
 * _isupper - function returns uppercase
 * @c: parameter to be checked
 * Return: 0 if false 1 if true
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
