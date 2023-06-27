#include "main.h"

/**
 * puts2 - prints every other character of a spring
 * @str: The string to be treated
 * Return: void
 */

void puts(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = o; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
