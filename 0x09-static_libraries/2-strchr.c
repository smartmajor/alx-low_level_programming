#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strchr - function returns character first occurence
 * @s: pointer
 * @c: input string
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
