/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int n1,n2,r;
    printf("Enter 2 numbers :\n");
    scanf("%d%d",&n1,&n2);
    printf("%d,%d\n",n1,n2);
    char ch;
    printf("Enter the operator :\n");
    scanf(" %c", &ch);
    if(ch == '+')
    {
        // r = n1+n2;
        printf("Result: %d + %d = %d\n", n1, n2, n1 + n2);
    }
    else if(ch == '-')
    {
        r = n1-n2;
        printf("%d",r);
    }
    else if(ch == '*')
    {
        r = n1*n2;
        printf("%d",r);
    }
    else if(ch == '/')
    {
        r = n1/n2;
        printf("%d",r);
    }
    else if(ch == '%')
    {
        r = n1%n2;
        printf("%d",r);
    }
    
}




