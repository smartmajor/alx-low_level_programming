#include "main.h"

/**
 *print_diagsums - function prints the sum of 2 diagonals
 *@a: pointer to matrix first element
 *@size: size of matrix
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	sum1 += *(a + i * size + i);
	sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d", sum1);
	printf(" ");
	printf("%d", sum2);
	printf("\n");
}
