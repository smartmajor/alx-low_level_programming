#include "main.h"

/**
 *_strstr - fuction returns substring
 *@haystack: string
 *@needle: substring
 *Return: h as (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	h = haystack;
	n = needle;

	if (*n == '\0')
	{
	return (haystack);
	}

	while (*h != '\0')
	{
		if (*h == *n)
	{
		char *temp_h = h;
		char *temp_n = n;

	while (*temp_n != '\0' && *temp_h == *temp_n)
	{
		temp_h++;
		temp_n++;
	}

	if (*temp_n == '\0')
	{
		return (h);
	}
	}

		h++;
	}

	return (NULL);
}
