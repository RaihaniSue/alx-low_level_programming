#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, index;
	char *array;

	if (argc != 2)
	{
		/* Check if the correct number of arguments is provided */
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		/* Check if the number of bytes is negative */
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (index = 0; index < num_bytes; index++)
	{
		/* Print the opcodes as hexadecimal values */
		if (index == num_bytes - 1)
		{
			printf("%02hhx\n", array[index]);
			break;
		}
		printf("%02hhx ", array[index]);
	}
	return (0);
}
