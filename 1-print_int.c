#include "main.h"

/**
 * print_int - a function to print integers
 * @args: arguments' list
 * Return: divisor
 */
int print_int(va_list args)
{
	int value, divisor = 1, digit, digitCount = 0;
	unsigned int number;

	value = va_arg(args, int);

	if (value == 0)
	{
		_putchar('0');
		return 1;
	}
	if (value < 0)
	{
		/*value = -value;*/
		_putchar('-');
		digitCount = digitCount + _putchar(45);
		number = (-1) * value;
	}
	else
		number = value;
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
