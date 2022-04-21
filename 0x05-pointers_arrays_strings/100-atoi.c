#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to char
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			int nb;
		nb = nb * -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			int des;
			des = des * 10;
			des = des - (s[a] - '0');
			int brk;
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	des = nb *des;
	return (des);
}

