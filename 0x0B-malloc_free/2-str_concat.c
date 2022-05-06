#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));
	if (s == NULL)
		return (NULL);
			/* add first string to array s */
			for (i = 0; s1[i] != '\0'; i++)
				s[i] = s1[i];
	/* addsecond string to area */
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
