#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return:0
 */
void print_alphabet_x10(void);
{
	int i;
	char al;

	for (i = '0'; i <= '9'; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
	}
	_putchar('\n');
}
