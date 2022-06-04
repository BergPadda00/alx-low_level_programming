#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printa if number positive, zero negative
 *
 * Return: Alwys (Success)
 */
int main(void)
{
	int n;
	srand(time));
	n = rand() - RAND_MAX / 2;

	if (n >0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	returb (0);
}
