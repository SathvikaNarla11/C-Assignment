/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

struct Date
{
  char date;
  char month;
  short year;
};

struct Student
{
  char name[40];
  long long mobile;
  struct Date dob;
};


int
main ()
{
  struct Student s1;

  scanf ("%39[^\n]", s1.name);
  scanf ("%lld", &s1.mobile);
  scanf ("%hhd", &s1.dob.date);
  scanf ("%hhd", &s1.dob.month);
  scanf ("%hd", &s1.dob.year);

  printf ("Name : %s\n", s1.name);
  printf ("Mobile : %lld\n", s1.mobile);
  printf ("DOB : %02hhd/%02hhd/%04hd\n", s1.dob.date, s1.dob.month,
		  s1.dob.year);

}

