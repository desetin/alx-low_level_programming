#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is theint that will use for the argument of the function
 * Return: integer value
 */
int print_last_value(int n)
{
	int last;

	last = n % 10;
	if (last < 10)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
