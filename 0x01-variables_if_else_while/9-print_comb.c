#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a program that prints all possible single digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	if (num != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}