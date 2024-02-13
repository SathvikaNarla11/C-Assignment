/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[80];
    char words[5][20];
    
    scanf("%[^\n]s",str);
    sscanf(str,"%s %s %s %s %s", words[1], words[2], words[3], words[4], words[5]);
    
    for(int i=1;i<=5;i++)
    {
         printf("String %d :%s\n",i,words[i]);
    }
    
    
}

