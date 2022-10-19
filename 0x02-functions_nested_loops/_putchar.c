#include <unistd.h>

/**
 * _putchar - putchar
 * @c: The character to print
 *
 * Return: On 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
