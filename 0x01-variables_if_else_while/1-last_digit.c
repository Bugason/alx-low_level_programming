#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int n;
	int lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;
	if (lstd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	else if (lstd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstd);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, lstd);
	}

	return (0);
}
