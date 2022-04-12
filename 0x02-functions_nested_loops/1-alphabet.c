#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	void ch = 'a';

	while (ch >= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
	return (0);
}
