#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main entry
 *
 * Return: return (0) when the code succeed
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* if  n > 0, print positive */

	if (n > 0)

		printf("%d is positive", n);

	else if (n == 0)
		printf("%d is zero", n);


	else
		printf("%d is negative", n);

	printf("\n");

	return (0);
}
