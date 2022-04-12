#include "main.h"
/**
 * print_sign
 * @c: number input
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-'
 */
int print_sign(int c)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else 
	{
		_putchar ('-');
		return (-1);
	}
}
