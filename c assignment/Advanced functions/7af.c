/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Time
{
    int hour;
    int min;
    int sec;
};

int getSecondsFrmTime(struct Time *tm);

int getSecondsFrmTime(struct Time *tm)
{
    int d = (tm->hour*3600)+(tm->min*60)+(tm->sec);
    return d;
}

int main()
{
    struct Time t1;
    struct Time *t;
    t = &t1;
    scanf("%d",&t1.hour);
    scanf("%d",&t1.min);
    scanf("%d",&t1.sec);
    int s = getSecondsFrmTime(&t1);
    printf("%d",s);
}

