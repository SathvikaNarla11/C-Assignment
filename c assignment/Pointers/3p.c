/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *pi;
    short int *ps;
    char *pc;
    
    int a =10;
    pi = &a;
    
    printf("%ld\n",sizeof(pi));
    printf("%ld\n",sizeof(ps));
    printf("%ld\n",sizeof(pc));
    
    printf("Address in hexa format: %p\n",pi);
    printf("Address in integer format: %u\n",pi);
    printf("value at address : %d\n",*pi);
    
    pi = (int *)100;
    ps = (int *)100;
    pc = (int *)100;
    
    
    
    printf("%d\n", pi);
    printf("%hd\n", ps);
    printf("%c\n", pc);
    
    pi++;
    ps++;
    pc++;
    
    printf("%d\n", pi);
    printf("%hd\n", ps);
    printf("%c\n", pc);
    
}


