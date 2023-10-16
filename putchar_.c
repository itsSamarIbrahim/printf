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
		write (1, &c, 1);
		index++;
	}
}
