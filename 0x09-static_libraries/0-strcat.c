#include "main.h"
#include <string.h>
#include <stdio.h>

 /**
 * _strcat - function concatenates two strings
 * @dest: input value to be returned
 * @src: input value
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
