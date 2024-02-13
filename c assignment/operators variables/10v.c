/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("The numbers are equal");
    }
    else if(a>b & a>c)
    {
        printf("a is greater");
    }
    else if(a<b & a<c)
    {
        printf("a is smaller");
    }
    else{
        printf("None");
    }
}


