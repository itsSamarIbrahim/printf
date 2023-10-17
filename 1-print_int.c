#include "main.h"

/**
 * print_int - a function to print integers
 * @args: arguments' list
 * Return: divisor
 */
int print_int(va_list args)
{
	int value, divisor = 1, digit;

	value = va_arg(args, int);

	if (value < 0)
	{
		value = -value;
		_putchar('-');
	}
	while (value / divisor >= 10)
	{
		divisor = divisor * 10;
	}
	while (divisor > 0)
	{
		digit = value / divisor;
		_putchar(48 + digit);
		value = value % divisor;
		divisor = divisor / 10;
	}

	return (divisor);
}