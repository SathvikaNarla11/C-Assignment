/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Time
{
    int hr;
    int m;
    int s;
};

int getTotalSecondsElapsed(struct Time t);
int main()
{
    struct Time t1;
    printf("Enter time : \n");
    scanf("%d%d%d",&t1.hr,&t1.m,&t1.s);
    getTotalSecondsElapsed(t1);
    // int x =getTotalSecondsElapsed(t1);
    // printf("%d",x);
    
}

int getTotalSecondsElapsed(struct Time t)
{
    int res = ((t.hr * 3600)+(t.m * 60) +t.s);
    printf("%d",res);
}

