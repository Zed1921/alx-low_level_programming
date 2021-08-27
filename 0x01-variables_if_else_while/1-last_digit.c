#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -  print the last digit of the number stored in the variable n.
 *         if the last digit of n is greater than or less than 5.
 *
 *Return: Always 0.
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("%d and is greater than 5\n", lastDigit);
}
else if (LastDigit == 0)
{
printf("%d and is 0\n", lastDigit);
}
else
{
printf("%d and is less than 6 and not 0\n", lastDigit);
}
return (0);
}
