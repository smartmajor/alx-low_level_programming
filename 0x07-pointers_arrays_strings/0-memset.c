#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: a pointer
 * @n: bytes to be returned
 * @b: is a constant
 * Return: s point if successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
