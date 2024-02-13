/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct Student
{
    char name[40];
    int mn;
    int dob;
};

int main()
{
    struct Student *ptr;
    ptr = (struct Student *)malloc(4* sizeof(struct Student));
    
    for(int i=1;i<=4;i++)
    {
        printf("Enter name: ");
        scanf(" %[^\n]s",(ptr+i-1)->name);
        
        printf("Enter mn: ");
        scanf("%d",&(ptr+i-1)->mn);
        
        printf("Enter dob: ");
        scanf("%d",&(ptr+i-1)->dob);
        
        printf("\n");
        
    }
    
    for(int i=1;i<=4;i++)
    {
        printf("Name : %s\n", (ptr+i-1)->name);
        printf("MN : %d\n", (ptr+i-1)->mn);
        printf("Dob : %d\n", (ptr+i-1)->dob);
        
        printf("\n");
    }
}

