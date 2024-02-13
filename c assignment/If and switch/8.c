/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n2>n3)
    {
        printf("Decending order\n");
    }
    else if(n3>n2 &&n2>n1)
    {
        printf("Ascending order\n");
    }
    else if(n1==n2 && n2==n3)
    {
        printf("Equal\n");
    }
    else{
        printf("Random\n");
    }
}

