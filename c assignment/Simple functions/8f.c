/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Time
{
    int h;
    int m;
    int s;
};
struct Time getTotalSecondsElapsed(int t1s);
struct Time getTotalSecondsElapsed(int t1s)
{
    struct Time t1;
    t1.h= t1s/3600;
    int p= t1s%3600;
    t1.m = p/60;
    t1.s = p%60;
    return t1;
}
int main()
{
    struct Time t1;
    int tts;
    printf("Enter seconds : \n");
    scanf("%d",&tts);
    t1=getTotalSecondsElapsed(tts);
    printf("%d:%d:%d",t1.h,t1.m,t1.s);
    
}
