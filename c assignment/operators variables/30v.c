/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short int num;
    scanf(" %hx",&num);
    int bit0 = (num >> 0)&1;
    int bit9 = (num >> 9)&1;
    printf("%d\n",bit0);
    printf("%d\n",bit9);
}


