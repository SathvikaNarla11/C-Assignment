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
    double radians;
    printf("Enter the degree:\n");
    scanf("%lf",&angle);
    
    radians = angle *(3.14/ 180);
    
    printf("Radians : %f\n",radians);
    printf("\n");
    printf("Sin value : %f\n",sin(radians));
    printf("Cos value : %f\n",cos(radians));
    printf("Tan value : %f\n",tan(radians));
    printf("\n");
    double sinvalue = sin(radians);
    double cosvalue = cos(radians);
    double tanvalue = tan(radians);
    printf("\n");
    printf("Inverse Sin value : %f\n",asin(sin(radians)));
    printf("Inverse Cos value : %f\n",acos(cosvalue));
    printf("Inverse Tan value : %f\n",atan(tanvalue));
}
