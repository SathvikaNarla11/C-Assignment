/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

double getSphereSurfaceArea(double radius)
{
    double sf = 4*3.14*radius*radius;
    return sf;
}

int main()
{
    double r;
    printf("Enter radius of the sphere :\n");
    scanf("%lf",&r);
    double sf = getSphereSurfaceArea(r);
    printf("%lf",sf);
}

