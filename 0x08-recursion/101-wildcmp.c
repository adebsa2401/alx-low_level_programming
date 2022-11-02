#include "main.h"
/**
 * wildcmp - wildcmp
 * @s1: char*
 * @s2: char*
 *
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0' && *s1 == '\0')
return (1);

if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

return (0);
}
