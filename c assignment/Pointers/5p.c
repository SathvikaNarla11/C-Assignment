/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    int *p;
    p = &x;
    x = 100;
    printf("content of integer variable : %d\n",*p);
    
    *p = 200;
    printf("content of integer variable after de refering : %d\n",x);
    

    printf("Enter the new value : \n");
    scanf("%d",&x);
    printf("New value entered by user : %d\n",*p);
    
    printf("Enter the new value again: \n");
    scanf("%d",p);
    printf("New value entered by user : %d\n",x);
    
    
}

