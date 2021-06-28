#include "holberton.h"                                                                                                                     
/**                                                                                                                                        
 * _puts - Function that prints a string                                                                                                   
 * @str: input character                                                                                                                   
 * Return: string                                                                                                                          
 */                                                                                                                                        
void _puts(char *str)                                                                                                                      
{                                                                                                                                          
        int count = 0;                                                                                                                     
                                                                                                                                           
        while (count >= 0)                                                                                                                 
        {                                                                                                                                  
                if (str[count] == '\0')                                                                                                    
                {                                                                                                                          
                        _putchar('\n');                                                                                                    
                        break;                                                                                                             
                }                                                                                                                          
                _putchar(str[count]);                                                                                                      
                count++;                                                                                                                   
        }                                                                                                                                  
}          
