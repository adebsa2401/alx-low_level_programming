#include "main.h"

/**
 * swap_int - swap int
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
