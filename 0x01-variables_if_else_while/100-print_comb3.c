#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, i;

	for (x = '0'; x <= '8'; x++)
	{
		for (i = x + 1; i <= '9'; i++)
		{
			putchar(x);
			putchar(i);
			if (x != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

