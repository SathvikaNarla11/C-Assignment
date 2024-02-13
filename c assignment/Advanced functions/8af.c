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

void convertSecondsToTime(int seconds, struct Time *tm);

void convertSecondsToTime(int seconds, struct Time *tm)
{
    tm->h = seconds / 3600;
    int m = seconds%3600;
    tm->m = m/60;
    tm->s = m%60;
    
    
}

int main()
{
    int ts;
    struct Time t1;
    printf("Enter the no.of seconds : \n");
    scanf("%d",&ts);
    convertSecondsToTime(ts,&t1);
    printf("%02d : %02d : %02d",t1.h,t1.m,t1.s);
}

