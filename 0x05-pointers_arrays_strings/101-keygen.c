#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to generate random valid password for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int pass[100];
	int a, sum = 0, n;

	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 -sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
