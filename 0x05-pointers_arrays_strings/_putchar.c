#include <unistd.h>

/**
 * _putchar.c - write the character c to stdout
 * @C: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
