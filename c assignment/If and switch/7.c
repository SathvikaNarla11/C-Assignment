/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        printf("%d",n1);
    }
    else if(n2>n1){
        printf("%d",n2);
    }
    else if(n1=n2){
        printf("equal");
    }
}

