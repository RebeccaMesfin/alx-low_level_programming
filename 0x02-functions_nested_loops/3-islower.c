#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 *return: 1 if character is lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
