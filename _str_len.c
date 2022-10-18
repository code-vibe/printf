# include "main.h"

/**
 * _string_len - returns len of strings
 * @s: pointer to string
 *
 * Return: string length
 */


int _string_len(const char * const s)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

