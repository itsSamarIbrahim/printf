#include "main.h"

/**
 * print_int - a function helps to print an integer
 * @args: arguments' list
 * Return: the count of the digits
 */
int print_int(va_list args)
{
	int value, divisor = 1, digitCount = 0;
	unsigned int number;

	value = va_arg(args, int);
	if (value < 0)
	{
		digitCount += _putchar('-');
		number = value * -1;
	}
	else
		number = value;
	while (number / divisor > 9)
		divisor = divisor * 10;
	while (divisor != 0)
	{
		digitCount += _putchar('0' + number / divisor);
		number = number % divisor;
		divisor = divisor / 10;
	}

	return (digitCount);
}
