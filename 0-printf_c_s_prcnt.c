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

int _strncmp(const char *firstString, const char *secondString, int maxNum)
{
	int i = 0;
	while (i < maxNum)
	{
		if (firstString[i] != secondString[i])
			return (firstString[i] - secondString[i]);
		if (firstString[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
