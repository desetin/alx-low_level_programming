#include "main.h"

/**
 * print_times_table - prints time table
 * @n : times table to use
 * Return: void
 */
void print_times_table(int n)
{
	int a = 0, tab, b;

	if (n < 0 || n > 15)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			tab = a * b;
				if (b == 0)
					_putchar('0' + tab);
				else if (tab < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + tab);
				}
				else if (tab < 100)
				{
					_putchar(' ');
					_putchar('0' + tab / 10);
					_putchar('0' + tab % 10);
				}
				else
				{
					_putchar('0' + tab / 100);
					_putchar('0' + (tab - 100) / 10);
					_putchar('0' + tab % 10);
				}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
