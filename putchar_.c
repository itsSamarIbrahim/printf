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
	int index = 0;

	while (index < 1)
	{
		write(1, &c, 1);
		index++;
	}
}

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
