#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - Entry point
 *@name: first parameter
 *@f: a pointer to a fun0ction that takes a characheter functrion
 *Return: 0 Always for Success
 */
void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
