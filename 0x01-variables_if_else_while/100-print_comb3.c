#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a pragram that prints all combination of double-digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	int p;

	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	if (d != p)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
