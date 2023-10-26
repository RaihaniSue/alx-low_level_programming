#include "main.h"
/**
 * power_num - entry point
 * @b: base
 * @pwr: the power
 *
 * Return: the powered number
 */
unsigned long int power_num(unsigned int b, unsigned int pwr)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= pwr; a++)
		num *= b;
	return (num);
}

/**
 * print_binary - second entry point
 * @n: the represented number
 *
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = power_num(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

