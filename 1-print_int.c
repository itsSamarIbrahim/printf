#include "main.h"

/**
 * print_int - a function to print integers
 * @args: arguments' list
 * Return: the count of the digits
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
		value = -value;
	}
	while (value / divisor > 9)
		divisor = divisor * 10;
	while (divisor > 0)
	{
		digit = value / divisor;
		_putchar('0' + digit);
		value = value % divisor;
		divisor = divisor / 10;
		digitCount++;
	}

	return (digitCount);
}
