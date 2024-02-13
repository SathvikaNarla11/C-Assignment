/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r;
    int mt;
    int v;
    printf("Enter the radius of sphere\n");
    scanf("%d",&r);
    printf("Enter the metal type of the sphere\n");
    scanf("%d",&mt);
    switch(mt)
    {
        case 1:
            v = 2.712*(4/3)*3.14*r*r*r ;
            printf("%d",v);
            break;
        case 2:
            v = 8.940*(4/3)*3.14*r*r*r ;
            printf("%d",v);
            break;
        case 3:
            v = 19.320*(4/3)*3.14*r*r*r ;
            printf("%d",v);
            break;
        case 4:
            v = 7.850*(4/3)*3.14*r*r*r ;
            printf("%d",v);
            break;
        case 5:
            v = 10.490*(4/3)*3.14*r*r*r ;
            printf("%d",v);
            break;
        default:
            printf("\nError");
    }
    
}

