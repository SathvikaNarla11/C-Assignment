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
    double angle;
    scanf("%lf",&angle);
    
    double radians = angle *(M_PI/180);
    
    printf("Sine value is %lf \n ",sin(radians));
    printf("Cos value is %lf \n ",cos(radians));
    
    double res = sqrt((pow(sin(radians),2))+(pow(cos(radians),2)));
    printf("Result : %lf\n",res);
}

