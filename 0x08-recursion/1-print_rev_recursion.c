#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: the string to print
 * Return: the character
 */
void _print_rev_recursion(char *s)
{
        if (s[0] != '\0')
        {
                _print_rev_recursion(s + 1);
                _putchar(s[0]);
        }
        else
                _putchar('\n');
}
