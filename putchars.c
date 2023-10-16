#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * putchars - an implementation for the real puthcar, help with(%d, i%)
 * @c: write this character for the stdout
 * Return: nothing - void
 */
void putchars(char c)
{
	unsigned char unsigned_ch;

	if (write(1, &c, 1) != 1)
		return (EOF);

	unsigned_ch = c;
	return (unsigned_ch);

}
