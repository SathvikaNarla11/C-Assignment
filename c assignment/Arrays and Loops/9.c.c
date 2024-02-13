/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    printf("Enter string 1: ");
    scanf("%[^\n]s",str1);
    strcpy(str2,str1);
    
    printf("The copied string is : %s",str2);
    
}

