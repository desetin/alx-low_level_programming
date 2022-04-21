#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: pointer to char
 *
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
