#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * putchar_ - an implementation for the real putchar function
 * @c: write this character for the stdout
 * Return: nothing - void
 */
void putchar_(char c)
{
	unsigned char unsigned_ch;

	if (write(1, &c, 1) != 1)
		return EOF;
	else
		unsigned_ch = c;

	return (unsigned_ch);
}
