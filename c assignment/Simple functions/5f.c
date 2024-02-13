/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
unsigned int clearBit(unsigned int val , int bitPos)
{
    val = val & ~(1<<bitPos);
    return val;
}
int main()
{
    short int num;
    int p;
    scanf("%hx",&num);
    scanf("%d",&p);
    // double res = clearBit(num,p);
    printf("%hx",clearBit(num,p));
}


