#include "main.h"

/**
 * format_handler - an implementation of a function that takes a format string
 * @format: a pointer to a string
 * @funcs_list: a list of the functions
 * @args: arguments' list
 * Return: the number of the characters (ON SUCCESS) or -1 (ON FAILURE)
 */
int format_handler(const char *format, conversion funcs_list[], va_list args)
{
	int a, b, result = 0, chars_count = 0;

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; funcs_list[b].operators != NULL; b++)
			{
				if (format[a + 1] == funcs_list[b].operators[0])
				{
					result = funcs_list[b].func(args);
					if (result == -1)
						return (-1);
					chars_count = chars_count + result;
					break;
				}
			}
			if (funcs_list[b].operators == NULL && format[b + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					chars_count = chars_count + 2;
				}
				else
					return (-1);
			}
			a++;
		}
		else
		{
			_putchar(format[a]);
			chars_count++;
		}
	}

	return (chars_count);
}
