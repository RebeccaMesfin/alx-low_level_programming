#include "main.h"
/**
* main - lists all the naturak numbers below 1023 (excluded)
*        that are multiple of 3 or 5.
*
* return: always 0
*/
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
