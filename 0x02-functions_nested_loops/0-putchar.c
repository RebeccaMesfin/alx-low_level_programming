#include <main.h>
#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char beki[] = "_putchar";
	int c;
	for (c = 0; c < 8; c++)
	{
		_putchar(beki[c]);
	}
	_putchar('\n');
	return (0);
}
