#include <stdio.h>                                                    
#include <string.h>                                                   
int strlen2(char s[]);                                                
int palindromo(char x[]);                                             
                                                                      
int main(void)                                                        
{                                                                     
        int variable = 10;                                            
        int *puntero = &variable;                                     
        *puntero = 10;                                                
        printf("&variable : %p\n", &variable);                        
        printf("puntero   : %p\n", puntero);                          
        printf("&puntero  : %p\n", &puntero);                         
        printf("variable  : %d\n", variable);                         
        printf("*puntero  : %d\n", *puntero);                         
        printf("Tamanio de puntero  : %d bits\n", sizeof(puntero)*8); 
                                                                      
        printf("Palindromo: %d\n", palindromo("anitalavalatina"));    
        return 0;                                                     
}                                                                     
                                                                      
void swap(int *x, int *y)                                             
{                                                                     
        int temp;                                                     
        temp = *x;                                                    
        *x = *y;                                                      
        *y = temp;                                                    
}     
      
int palindromo(char x[])                                              
{                                                                     
        int lenx = strlen(x);                                         
        int i = 0;                                                    
        int j = lenx - 1;                                             
        while (x[i] != '\0'){                                         
                if (x[i] !=  x[j]){                                   
                        return 0;                                     
                }                                                     
                i++;                                                  
                j--;                                                  
        }                                                             
        return 1;                                                     
}    