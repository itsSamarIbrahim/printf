#include "main.h"
#include <stdarg.h>

/**
 * _printf - implementing the %s and %c from the real printf function
 * @format: this is a character string
 * Return: the number of character printed (alpha_length)
 */
int _printf(const char *format, ...)
{
	int index, store, j;
	char *ptrStr;
	va_list printf;

	va_start(printf, format);
	for (index = 0; format[index] != 0; index++)
	{
		if (_strncmp(format + index, "%c", 2) == 0)
		{
			store = va_arg(printf, int);
			putchar_(store);
			index++;
		}
		else if (_strncmp(format + index, "%s", 2) == 0)
		{
			ptrStr = va_arg(printf, char *);
			for (j = 0; ptrStr[j] != 0; j++)
				putchar_(ptrStr[j]);
			index++;
		}
		else
			putchar_(format[index]);
	}
	va_end(printf);

	return (0);
}
