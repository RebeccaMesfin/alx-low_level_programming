#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success/correct)
 */
int main(void)
{
  int number;
  for (number = '0'; number <= '9'; number++)
    {
      putchar(number);
      if (number != '9')
	{
      putchar(',');
      putchar(' ');
	}
    }
  putchar('\n');
  return (0);
}
