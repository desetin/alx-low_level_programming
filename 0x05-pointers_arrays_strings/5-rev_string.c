#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: pointer to char
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int a, len, mid;
	char p;

	for (len = 0; s[len] != '\0'; len++)
		a = 0;
	mid = len / 2;
	while (mid--)
	{
		p = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = p;
		a++;
	}
}
