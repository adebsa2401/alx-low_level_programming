#include "main.h"

/**
 * _strcat - strcat
 * @dest: char*
 * @src: char*
 *
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
