#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: pointer
 * @accept: string
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; ++p)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
	++s;
	}
	return (NULL);
}
