#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** checking for positive and negative
 *
 *
 */

/* int main begins the code execution
 *
 * Result: 0 is for success
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if ( n > 0 ) {
    printf("is positive\n" );
  } else if ( n == 0 ) {
    printf("is zero\n" );
  } else {
    printf("is negative\n" );
  }
   return (0);
}
