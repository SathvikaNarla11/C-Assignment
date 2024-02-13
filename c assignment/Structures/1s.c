/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

struct time{
    char hour;
    char min;
    char sec;
};

int main()
{
    struct time t1;
    printf("Enter hours:\n");
    scanf("%hhd",&t1.hour);
    
    printf("Enter minutes:\n");
    scanf("%hhd",&t1.min);
    
    printf("Enter seconds:\n");
    scanf("%hhd",&t1.sec);
    
    printf("The time is : %02d:%02d:%02d\n",t1.hour,t1.min,t1.sec);
}
