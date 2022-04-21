#include "main.h"

/**
 * swap_int - swap values of a and b
 * @a: pointer a
 * @b: pointer b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
