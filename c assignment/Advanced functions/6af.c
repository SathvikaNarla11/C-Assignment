/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
void strcpyLowerCase(char *dst, char *src)
{
    for(int i=0;src[i] != '\0';i++)
    {
        if(src[i]>='A' && src[i]<='Z')
        {
            dst[i] = src[i]+ 32;
        }
        else
        {
            dst[i] = src[i];
        }
    }
    
}
int main()
{
    char str[100],des[100];
    scanf("%[^\n]s",str);
    strcpyLowerCase(des,str);
    strcpyLowerCase(des,str);
    printf("SRC : %s\n",str);
    printf("des : %s",des);
}

