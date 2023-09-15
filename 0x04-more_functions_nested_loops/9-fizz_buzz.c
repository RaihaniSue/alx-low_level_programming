#include <stdio.h>

/**
 * fizz_buzz - Entry point
 * Return: 0 Always
 */
int fizz_buzz(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			if (a % 3 == 0)
			{
				printf("Fizz");
			}
			if (a % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
