#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

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
			if (format[index + 1] != 0 && '%' == format[index])
			{
				if ('c' == format[index + 1])
				{
					store = va_arg(printf, int);
					if (putchar_(store) == EOF)
						return (EOF);
					increment++;
					index++;
				}
				else if ('s' == format[index + 1])
				{
					ptrStr = va_arg(printf, char *);
					for (j = 0; ptrStr[j] != 0; j++)
					{
						if (putchar_(ptrStr[j]) == EOF)
							return (EOF);
						increment++;
					}
					index++;
				}
				else if ('%' == format[index + 1])
				{
					if (putchar_('%') == EOF)
						return (EOF);
					putchar_(format[index + 1]);
					increment += 2;
					index++;
				}
				else
				{
					if (putchar_('%') == EOF || putchar_(format[index + 1]) == EOF)
						return EOF;
					increment += 2;
					index++;
				}
			}
			else
			{
				if (putchar_(format[index]) == EOF)
					return EOF;
				increment++;
			}
		}
		va_end(printf);

		return (increment);
	}
}
