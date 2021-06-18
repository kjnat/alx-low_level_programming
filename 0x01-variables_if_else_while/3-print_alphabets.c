#include <stdio.h>
#include <unistd.h>
/**
 * main - entry of function
 * Description: print both lowercase and uppercase alphabets
 * Result: 0 is success
 */
int main()
{
         char i;

         for (i = 'a'; i <= 'z'; i++)
         {
             putchar(i);
         }
         for (i = 'A'; i <= 'Z'; i++)
         { 
             putchar(i);
         }
         putchar('\n');
return (0);
}
