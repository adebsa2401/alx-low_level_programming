#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
int n;
char ch;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
