#include "main.h"
#include <unistd.h>

/**
 * putchar_ - an implementation for the real putchar function
 * @c: write this character for the stdout
 * Return: 0
 */
int putchar_(char c)
{
	int index = 0;

	while (index < 1)
	{
		write(1, &c, 1);
		index++;
	}
	return (0);
}
