#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: pointer
 * @accept: input
 * Return: len as result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p && *p != *s)
			p++;
		if (!*p)
		break;
		s++;
		len++;
	}
	return (len);
}
