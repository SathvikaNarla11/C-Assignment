/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    printf("The given string is: %s\n",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count ++;
    }
    printf("The length is %d",count);
    return 0;
}




