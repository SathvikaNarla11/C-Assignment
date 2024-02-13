/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
double getSphereVolume(double radius)
{
    double volume = ((4.0/3.0)*3.14*radius*radius*radius);
    return volume;
}
int main()
{
    double r;
    printf("Enter r: \n");
    scanf("%lf",&r);
    printf("%lf",getSphereVolume(r));
}

