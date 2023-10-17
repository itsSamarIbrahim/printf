#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - implementing the %s and %c from the real printf function
 * @format: this is a character string
 * Return: the number of character printed (alpha_length)
 */
int _printf(const char *format, ...)
{
	int index = 0, store, increment = 0;
	char *ptrStr;
	va_list printf;

	va_start(printf, format);
	for (index = 0; format[index] != 0; ++index)
	{
		if (format[index + 1] != 0 && '%' == format[index])
		{
			if ('c' == format[index + 1])
			{
				putchar_(va_arg(printf, int));
				increment++;
				index++;
			}
			else if ('s' == format[index + 1])
			{
				for (*ptrStr = va_arg(args, char *); *ptrStr != '\0'; ptrStr++)
				{
					putchar_(*ptrStr);
					increment++;
				}
				index++;
			}
			else
			{
				putchar_('%');
				putchar_(format[index + 1]);
				increment += 2;
				index++;
			}
			++i;
		}
		else
		{
			putchar_(format[index]);
			increment++;
		}
	}
	va_end(printf);

	return (increment);
}
