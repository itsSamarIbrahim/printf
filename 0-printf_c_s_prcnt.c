#include "main.h"
#include <stdarg.h>

/**
 * _printf - implementing the %s and %c from the real printf function
 * @format: this is a character string
 * Return: the number of character printed (alpha_length)
 */
int _printf(const char *format, ...)
{
	int index = 0, store, j, increment = 0;
	char *ptrStr;
	va_list printf;

	va_start(printf, format);
	for (index = 0; format[index] != 0; index++)
	{
		if (format[index + 1] != 0 && '%' == format[index])
		{
			if ('c' == format[index + 1])
			{
				store = va_arg(printf, int);
				putchar_(store);
				increment++;
				index++;
			}
			else if ('s' == format[index + 1] && '%' == format[index])
			{
				ptrStr = va_arg(printf, char *);
				for (j = 0; ptrStr[j] != 0; j++)
				{
					putchar_(ptrStr[j]);
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
