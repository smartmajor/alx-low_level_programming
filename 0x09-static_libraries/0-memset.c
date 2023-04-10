#include "main.h"

/**
 * _memset - function fills a block of memory with specific value
 * @s: address of memory to be filled
 * @b: the desired value
 * @n: bytes to be replaced
 * Return: array with new n bytes value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
