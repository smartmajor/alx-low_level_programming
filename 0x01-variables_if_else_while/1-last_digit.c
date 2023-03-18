#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program prints the last digit of n
 *
 * Return: Alays 0 (Success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        /* Your code goes here */
	m = n % 10;
	if (m > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("The last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
