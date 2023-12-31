#include "main.h"

/**
* _puts_recursion - this function outputs a single character
* to the standard output with a new line
* @s: string array to be outputted
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
