#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet is lowercase
 *
 **/
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
        putchar('\n');
}
