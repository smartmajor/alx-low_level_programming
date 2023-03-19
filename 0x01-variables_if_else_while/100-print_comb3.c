#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a pragram that prints all combination of double-digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d dd;

	for (d = '0'; d < '9'; d++)
	{
	for (dd = d +1; d <= '9'; dd++)
	{
	if (d != dd)
	{
	putchar(d);
	putchar(dd);
	if (d == '8' && dd == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
