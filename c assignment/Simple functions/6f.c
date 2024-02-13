/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int getTotalSecondsElapsed(int hour,int min,int sec)
{
    return ((hour*3600)+(min*60)+sec);
}

int main()
{
    int hr;
    int m;
    int s;
    scanf("%d%d%d",&hr,&m,&s);
    printf("%d", getTotalSecondsElapsed(hr,m,s));
}

