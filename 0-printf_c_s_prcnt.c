#include "main.h"
#include <stdarg.h>

/**
 * _printf - implementing the %s and %c from the real printf function
 * @format: this is a character string
 * Return: the number of character printed (alpha_length)
 */
int _printf(const char *format, ...)
{
	int alpha_length = 0, index, ch;
	va_list alpha;
	char *ptrStr;

	va_start(alpha, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			switch (format[index])
			{
				case 's':
					ptrStr = va_arg(alpha, char*);
					if (!ptrStr)
						ptrStr = "(nil)"
					for (; *ptrStr; ptrStr++, alpha_length++)
						putchar_(*ptrStr);
					break;
				case '%':
					putchar_('%');
					alpha_length++;
					break;
				case 'c':
					ch = (char) va_arg(alpha, int);
					putchar_(ch);
					alpha_length++;
					break;
			}
		}
		else
		{
			putchar_(format[index]);
			alpha_length++;
		}
	}
	va_end(alpha);

	return (alpha_length);
}
