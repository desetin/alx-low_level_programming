#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string followed by new line
 *@str: pointer to char
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
