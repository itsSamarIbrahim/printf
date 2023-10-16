#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * putchars - an implementation for the real puthcar, help with(%d, i%)
 * @c: write this character for the stdout
 * Return: nothing - void
 */
/*int putchars(char c)
{
	unsigned char unsigned_ch;

	if (write(1, &c, 1) != 1)
		return (EOF);

	unsigned_ch = c;
	return (unsigned_ch);
}*/
int putchars(char c)
{
	return (write(1, &c, 1));
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
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			switch (format[a + 1])
			{

				case 'i':
				case 'd':
					{
						prod = va_arg(args, int);
						if (prod < 0)
						{
							putchars('-');
							prod = -prod;
							char_printed++;
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
							char_printed++;
						}
						a++;
						break;
					}
				default:
					{
						putchars('%');
						putchars(format[a + 1]);
						char_printed = char_printed + 2;
						a++;
						break;
					}
			}
		}
		else
		{
			putchars(format[a]);
			char_printed++;
		}
	}
	va_end(args);

	return (char_printed);
}
