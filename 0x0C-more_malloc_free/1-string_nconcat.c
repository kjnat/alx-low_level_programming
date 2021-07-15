#include "holberton.h"                                                
#include <stdlib.h>                                                   
/**                                                                   
 * string_nconcat - function that concatenates two strings            
 * @s1: string of characters                                          
 * @s2: string of characters                                          
 * @n: number of bytes                                                
 * @Return: a pointer to the newly allocated space                    
 */                                                                   
char *string_concat(char *s1, char *s2, unsigned int n)               
{                                                                     
        char *concat_str;                                             
        int i;                                                        
        len = 0;                                                      
        concat_index = 0;                                             
                                                                      
        if (s1 == NULL)                                               
                s1 = " ";                                             
        if (s2 == NULL)                                               
                s2 = " ";                                             
        for (i = 0; i < len; i++)                                     
                len++;                                                
        concat_str = malloc(sizeof(s1) + ((sizeof(s2) * n)));         
                                                                      
        if (concat_str == NULL)                                       
                return (NULL);                                        
        if (n >= s2[i])                                               
                return (s2[i] + 1);                                   
                                                                      
        for (i = 0; s1[i]; i++)                                       
                concat_str[concat_index] = s1[i];                     
        for (i = 0; s2[i]; i++)                                       
                concat_str[concat_index] = s2[i];                     
                                                                      
        return (concat_str);                                          
} 
