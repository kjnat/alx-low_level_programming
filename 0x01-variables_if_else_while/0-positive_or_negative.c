#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** 
 * Function_name - function of n
 *
 * Description - checking for positivity or negativity
 *
 * Return: 0
 */
int main(void)
{
  int n;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;

/**
 * is_positive - if the number is greater than 0
 *
 * is_zero - if the number is 0
 */
 
  if ( n > 0 ) {
    printf("is positive\n" );
  } else if ( n == 0 ) {
    printf("is zero\n" );
  } else {
    printf("is negative\n" );
  }
  return (0);
}
