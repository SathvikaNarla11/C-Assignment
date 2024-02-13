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
  long long mobile;
  int yearOfBirth;				
};

int
main ()
{

  struct Student *ptr;
  ptr = (struct Student *) malloc (4 * sizeof (struct Student));

  scanf (" %[^\n]s", (*ptr).name);
  scanf ("%lld", &ptr->mobile);
  scanf ("%d", &ptr->yearOfBirth);

  printf ("Name : %s\n", (*ptr).name);
  printf ("Mobile : %lld\n", (*ptr).mobile);
  printf ("yearOfBirth : %d\n", (*ptr).yearOfBirth);



}



