#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: it is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int chars_count;
	conversion funcs_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL},
	};

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	chars_count = format_handler(format, funcs_list, args);

	va_end(args);

	return (chars_count);
}
