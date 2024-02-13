/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Student
{
  char      name[40];
  long long mobile;
  int       yearOfBirth; // Year in which one has born
};


int main()
{
    struct Student s1;
    struct Student *p;
    p = &s1;
    
    printf("Enter name :\n");
    scanf("%[^\n]s",s1.name);
    printf("Enter mobile :\n");
    scanf("%lld",&s1.mobile);
    printf("Enter dobyear :\n");
    scanf("%d",&s1.yearOfBirth);
    printf(" %s : %lld : %d\n",(*p).name,(*p).mobile,(*p).yearOfBirth);
    
    // printf(" %s : %lld : %d\n",s1.name,s1.mobile,s1.yearOfBirth);
    printf("__________\n");
    
    printf("Enter name :\n");
    scanf(" %[^\n]s",p->name);
    printf("Enter mobile :\n");
    scanf("%lld",&p->mobile);
    printf("Enter year :\n");
    scanf("%d",&p->yearOfBirth);
    
    
    printf(" %s : %lld : %d\n",s1.name,s1.mobile,s1.yearOfBirth);
    // printf(" %s : %lld : %d\n",(*p).name,(*p).mobile,(*p).yearOfBirth);
}



