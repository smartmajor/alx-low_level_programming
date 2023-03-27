#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int dt = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	dt = longi - 1;
	for (o = 0 ; o <= dt ; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[o]);
	}
	}
	putchar('\n');
}
