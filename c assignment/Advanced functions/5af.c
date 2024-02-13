/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<ctype.h>

void convertToLowerCase(char *str)
{
    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] >= 'A' && str[i]<='Z')
        {
            str[i] = str[i]+32;
        }
    }
}

int main()
{
    char arr[100];
    printf("Enter the string : ");
    scanf("%[^\n]s",arr);
    convertToLowerCase(arr);
    printf("%s",arr);
}

