#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print diagsums
 * @a: int*
 * @size: int
 */
void print_diagsums(int *a, int size)
{
int i;
unsigned int sum, sum1;
sum = 0;
sum1 = 0;
for (i = 0; i < size; i++)
{
sum += a[(size * i) + i];
sum1 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", sum, sum1);
}
