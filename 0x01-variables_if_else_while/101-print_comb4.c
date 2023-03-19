#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program prints all possible three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_1;
	int num_2;
	int num_3;

	for (num_1 = '0'; num_1 < '9'; num_1++)
	{
	for (num_2 = num_1 + 1; num_2 <= '9'; num_2++)
	{
	for (num_3 = num_2 + 1; num_3 <= '9'; num_3++)
	{
	if ((num_1 != num_2) != num_3)
	{
	putchar(num_1);
	putchar(num_2);
	putchar(num_3);
	if (num_1 == '7' && num_2 == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	return (0);
}
