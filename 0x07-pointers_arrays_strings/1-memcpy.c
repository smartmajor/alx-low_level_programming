#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: destination of memory copied
 * @src: source memory copied
 * @n: memory in bytes copied
 * Return: dest as true
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
