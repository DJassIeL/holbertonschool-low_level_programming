#include <stdio.h>
/**
* main - Prints the numbers with comma without repeat.
* Return: Return 0.
*/
int main(void)
{
	int i, k;

	for (i = '0' ; i <= '9'; i++)
	{
		for (k = i + 1; k <= '9'; k++)
		{
			putchar(i);
			putchar(k);
			if (i < '8' && k <= '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
