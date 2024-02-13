/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
    printf("Sin value : %f\n",sin(radians));
    printf("Cos value : %f\n",cos(radians));
    printf("Tan value : %f\n",tan(radians));
}


