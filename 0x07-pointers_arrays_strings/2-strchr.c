#include "main.h"

/**
 * _strchr - function that points to a character
 * @s: pointer
 * @c: pointer seacrched for
 * Return: s if true, Null if unavailable
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
