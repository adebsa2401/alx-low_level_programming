#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
