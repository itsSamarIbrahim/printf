#include "main.h"
#include <stdio.h>

int putchars(char c)
    {
        return (putc(c, stdout));
    }

/**
 * printf_d_i - a function helps to print numbers with %d and %i specifiers
 * @format: a pointer to the string
 * Return: the number of characters printed
 */
int printf_d_i(const char *format, ...)
{
	va_list args;
	int a, char_printed = 0, prod, divisor = 1, digit;

	va_start(args, format);
	for (a = 0; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			switch (format[a + 1])
			{

				case 'd':
				case 'i':
					prod = va_arg(args, int);
					if (prod < 0)
					{
						putchars('-');
						prod = -prod;
					}
					while (prod / divisor > 9)
					{
						divisor = divisor * 10;
					}
					while (divisor != 0)
					{
						digit = prod / divisor;
						putchars('0' + digit);
						prod = prod % divisor;
						divisor = divisor / 10;
					}
					break;
				default:
					putchars('%');
					putchars(*format);
					char_printed = char_printed + 2;
					break;
			}
		}
		else
		{
			putchars(*format);
			char_printed++;
		}
	}
	va_end(args);

	return (char_printed);
}