#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Program prints two two-digits limit99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	int dd;

	for (d = '0'; d <= 98; d++)
	{
	for (dd = d + 1; dd <= 99; dd++)
	{
	putchar((d / 10) + '0');
	putchar((d % 10) + '0');
	putchar(' ');
	putchar((dd / 10) + '0');
	putchar((dd % 10) + '0');
	if (d == 98 && dd == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
