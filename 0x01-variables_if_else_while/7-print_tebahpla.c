#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success/correct)
 */
int main(void)
{
  char alphabet;
  for (alphabet = 'z' : alphabet >= 'a'; alphabet--)
    {
      putchar(alphabet);
    }
  putchar('\n');
  return (0);
}
