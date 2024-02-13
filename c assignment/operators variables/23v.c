/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    double r;
    scanf("%lf",&r);
    
    printf("Densities of metals in grams per centimeter cube :\n");
    printf("Aluminum   2.712\nCopper   8.940\nGold   19.320\nIron   7.850\nSilver   10.490");
    
    double density;
    printf("\nEnter the densities of the metal : ");
    scanf("%lf",&density);
    
    double mass = (4.0/3.0) *(M_PI)*r*r*r *density;
    
    printf("The volume of sphere is : %lf\n",mass);
}
