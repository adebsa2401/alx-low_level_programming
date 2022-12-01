#include "main.h"
#include <unistd.h>

/**
 * _putchar - putchar
 * @c: char
 *
 * Return: int
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
