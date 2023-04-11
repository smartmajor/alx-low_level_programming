#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function duplicates to new memory location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		dup[n] = str[n];

	return (dup);
}
