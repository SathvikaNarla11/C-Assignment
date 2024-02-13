/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

unsigned int setBit(unsigned int val , int bitPos)
{
    
    int rest = val | (1 << bitPos);
    return rest;
    
}


int main()
{
    int num;
    int p;
    scanf("%x",&num);
    scanf("%d",&p);
    int res =  setBit(num , p);
    printf("%X",res);
    
}

