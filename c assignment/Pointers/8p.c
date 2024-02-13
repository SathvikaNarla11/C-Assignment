/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x;
   int *p;
   short int *s;
   char *c;
   
   x = 0x12345678;
   
   p=&x;
   s=(short *)&x;
   c=(char *)&x;
   
   printf(" %x \n",*p);
   printf(" %d \n",*s);
   printf(" %d \n",*c);
   
   s++;
   printf("after increment: %d \n",*s);
      
   c++;
   printf("after increment: %d \n",*c);
   
   c++;
   printf("after 2nd increment: %d \n",*c);
   
   c++;
   printf("after 3rd increment: %d \n",*c);
   
}


