/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char s[100];
    scanf("%10[^\n]",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] > 'A' && s[i]<'Z')
        {
            s[i]=s[i]+32;
        }
        else if(s[i] >'a' && s[i]<'z')
        {
            s[i] = s[i]-32;
        }
        else{
            s[i]=s[i];
        }
    }
    printf("%s",s);
}


