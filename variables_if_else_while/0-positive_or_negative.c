#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print a random number and his description.
 * Return: Return 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
return (0);
}
