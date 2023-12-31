#include "main.h"

/**
 * print_str - a function that helps to print a string
 * @args: arguments' list
 * Return: the number of characters (length) of the string
 */
int print_str(va_list args)
{
	char *str;
	int i, len = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}

		return (i);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}

		return (i);
	}
}
