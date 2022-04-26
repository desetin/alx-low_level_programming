#includee "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: value of set
 * @n: bytes of memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}