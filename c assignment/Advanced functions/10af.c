/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Date
{
  char  date;
  char  month;
  short year;
};
    
struct Student
{
  char  name[40];
  long long mobile;
  struct Date dob; //Date of birth, struct Date as given in assignment 2.
};

void getStudentInfo(struct Student *ps);
void getStudentInfo(struct Student *ps)
{
    scanf("%[^\n]s",ps->name);
    scanf("%lld",&ps->mobile);
    scanf("%hhd%hhd%hd", &ps->dob.date, &ps->dob.month, &ps->dob.year);
}

void printStudentInfo(struct Student *ps);
void printStudentInfo(struct Student *ps)
{
    printf("Name : %s\n",ps->name);
    printf("Mobile : %lld\n",ps->mobile);
    printf("DOB : %hhd/%hhd/%hd",ps->dob.date,ps->dob.month,ps->dob.year);
    
}
int main()
{
    struct Student s1;
    getStudentInfo(&s1);
    printStudentInfo(&s1);
}

