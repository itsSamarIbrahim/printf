#include "main.h"

/**
 * print_int - a function to print integers
 * @args: arguments' list
 * Return: divisor
 */
int print_int(va_list args)
{
	int value, divisor = 1, digit, digitCount = 0;

	value = va_arg(args, int);

	if (value == 0)
	{
		_putchar('0');
		return (1);
	}
	if (value < 0)
	{
		/*_putchar('-');*/
		digitCount = digitCount + _putchar('-');
		/*number = (-1) * value;*/
		if (value == INT_MIN)
		{
			_putchar('2');
			value = 147483648;
		}
	}
	else
	{
		value = -value;
	}
	while (value / divisor > 9)
		divisor = divisor * 10;
	while (divisor > 0)
	{
		digit = value / divisor;
		_putchar(48 + digit);
		value = value % divisor;
		divisor = divisor / 10;
		digitCount++;
	}

	return (digitCount);
}
