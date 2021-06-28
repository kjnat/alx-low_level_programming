#include "holberton.h"                                                                                                                     
                                                                                                                                           
/**                                                                                                                                        
 * print_rev - prints a string in reverse, followed by a new line.                                                                         
 * @s: input string.                                                                                                                       
 * Return: no return.                                                                                                                      
 */                                                                                                                                        
void print_rev(char *s)                                                                                                                    
{                                                                                                                                          
        int count = 0;                                                                                                                     
                                                                                                                                           
        while (count >= 0)                                                                                                                 
        {                                                                                                                                  
                if (s[count] == '\0')                                                                                                      
                {                                                                                                                          
                        print_rev('\n');                                                                                                    
                        break;                                                                                                             
                }                                                                                                                          
                print_rev(s[count]);                                                                                                       
                count++;                                                                                                                   
        }                                                                                                                                  
}           
