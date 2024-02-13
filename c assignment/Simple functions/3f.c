/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

double
getSphereWeight (double radius, double density)
{
  double q = (4.0 / 3.0) * 3.14 * radius * radius * radius * density;
  return q;
}

int
main ()
{
  double r, d;
  printf ("Enter radius and density of the sphere: \n");
  scanf ("%lf%lf", &r, &d);
  double res = getSphereWeight (r, d);
  printf ("%lf", res);
}

