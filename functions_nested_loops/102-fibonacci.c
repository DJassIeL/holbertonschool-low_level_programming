#include <stdio.h>
/**
 * main - prints fibonacci numbers.
 * Return: Return 0 value.
 */
int main(void)
{
	long int i, x, y, z;

	x = 1;
	y = 0;
	for (i = 0; i <= 49; i++)
	{
		z = x + y;
		y = x;
		x = z;
		printf("%ld", z);
		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
