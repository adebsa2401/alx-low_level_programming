#include "main.h"

/**
 * _isalpha - isalpha
 * @c: the character to be checked
 * Return: 1/0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
