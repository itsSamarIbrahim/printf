#include "main.h"
#include <stdio.h>

/**
 * _printf - a function helps to print numbers with %d and %i specifiers
 * @format: a pointer to the string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int a = 0, char_printed = 0, prod, divisor = 1, digit;

	va_start(args, format);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			switch (format[a + 1])
			{

				case 'i':
				case 'd':
					prod = va_arg(args, int);
					if (prod < 0)
					{
						putchar_('-');
						prod = -prod;
					}
					while (prod / divisor > 9)
						divisor = divisor * 10;
					while (divisor != 0)
					{
						digit = prod / divisor;
						putchar_('0' + digit);
						prod = prod % divisor;
						divisor = divisor / 10;
					}
					break;
				default:
					putchar_('%');
					putchar_(*format);
					char_printed = char_printed + 2;
					break;
			}
		}
		else
		{
			putchar_(*format);
			char_printed++;
		}
	}
	va_end(args);

	return (char_printed);
}
