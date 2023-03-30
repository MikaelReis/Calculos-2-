/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float SOMA (float a , int b)
{
    float result; 
    result = a + b;
    return result;
    
}
int main()
{
    float a ; 
    int b ; 
    float s ;
    a = 10.3;
    b = 12 ; 
    s = SOMA (a,b); // chamada de função SOMA (12.3,10 )
    printf("A soma de %2.f com %d é igual a : %2.f\n", a , b , s ); 
    
    return 0;
}
