#include "main.h"

/**
 * print_char - a function that helps with printing a character
 * @args: arguments' list
 * Return: 1 on success
 */
int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	_putchar(character);

	return (1);
}
