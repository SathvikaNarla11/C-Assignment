/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    scanf("%f %f", &a, &b);
    printf("%f + %f: %.1f\n",a,b,a+b);
    printf("%f - %f: %.2f\n",a,b,a-b);
    printf("%f * %f: %.3f\n",a,b,a*b);
    printf("%f / %f: %.4f\n",a,b,a/b);
    printf("remainder is: %.5f\n",fmod(a,b));

    
  
}

