#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of array
 * @a: pointer to int
 * @n: number of element of array
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
	if (n <= i)
	{
		_putchar('\n');
	}
}

