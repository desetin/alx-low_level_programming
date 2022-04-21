#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to char
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int a, sig = -1, res = 0, brk = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
		sig = sig * -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			res = res * 10;
			res = res - (s[a] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}

