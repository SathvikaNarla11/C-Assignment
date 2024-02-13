/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int a,b;
    scanf("%x %x", &a, &b);
    printf("Bitwise AND: %x\n",a&b);
    printf("Bitise OR: %x\n",a|b);
    printf("EX-OR: %x\n",a^b);
    printf("Compliment of num1: %x\n",~a);
    printf("Compliment of num2: %x\n",~b);
    printf("left shift of num1: %x\n",a<<1);
    printf("Right shift of num2: %x\n",b>>2);
    
  
}


