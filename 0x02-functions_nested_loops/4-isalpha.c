#include "main.h"
/**
 * _isalpha - Entry point
 * @c: given parameter
 * Return : 1 (Success) 0 (otherwise)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
