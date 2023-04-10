#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _memcpy - function copies memory area
 * @dest: memory destination
 * @src: memory origin
 * @n: number of bytes
 * Return: copied memory with changed  n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
