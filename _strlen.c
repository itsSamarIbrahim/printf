#include "main.h"

/**
 * _strlen - count the length of a string
 * @str: the string
 * Return: the length of the string - (len)
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
