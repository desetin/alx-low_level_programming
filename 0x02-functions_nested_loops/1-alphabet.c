#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch >= 'z')
	{
	print_alphabet(ch);
	ch++;
	}
	_putchar('\n');
	return (0);
}
