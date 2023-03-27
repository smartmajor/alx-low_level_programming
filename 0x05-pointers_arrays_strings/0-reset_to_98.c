#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function resets int to a new value with pointer
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 50;
	*p = &n;


