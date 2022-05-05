#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space
 * @str: input string
 *
 * Return: NULL if str == NULL
 */

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	s = malloc((1 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		s[i] = str[l];
		i++;
	}
	return (s);
}
