#include <stdio.h>
/**
 * main - prints the of 3 and 5 multiples.
 * Return: Return 0 value.
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			j = i + j;
	}
	printf("%i", j);
	printf("\n");
	return (0);
}
