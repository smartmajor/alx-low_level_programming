#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - function
 * @argc: counts arguments
 * @argv: returns string in arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	printf("%s\n", argv[i]);
	return (0);
}
