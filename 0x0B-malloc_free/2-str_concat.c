#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function gets input ends and sum to get size
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, bi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = bi = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[bi] != '\0')
		bi++;
	conct = malloc(sizeof(char) * (i + bi + 1));

	if (conct == NULL)
		return (NULL);
	i = bi = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[bi] != '\0')
	{
		conct[i] = s2[bi];
		i++, bi++;
	}
	conct[i] = '\0';
	return (conct);
}
