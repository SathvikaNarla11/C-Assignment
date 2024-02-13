/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Date
{
    char date;
    char month;
    short year;
};

int main()
{
    struct Date dt;
    scanf("%hhd",&dt.date);
    scanf("%hhd",&dt.month);
    scanf("%hd",&dt.year);
    
    printf("%02hhd/%02hhd/%hd\n",dt.date,dt.month,dt.year);
    
    int i;
    scanf("%d",&i);
    switch(i)
    {
       case 1:
       printf("%02hhd Jan %hd\n",dt.date,dt.year);
       break;
       
       case 2:
       printf("%02hhd Feb %hd\n",dt.date,dt.year);
       break;
       
       case 3:
       printf("%02hhd Mar %hd\n",dt.date,dt.year);
       break;
       
       case 4:
       printf("%02hhd Apr %hd\n",dt.date,dt.year);
       break;
       
       case 5:
       printf("%02hhd May %hd\n",dt.date,dt.year);
       break;
       
       case 6:
       printf("%02hhd Jun %hd\n",dt.date,dt.year);
       break;
       
       case 7:
       printf("%02hhd Jul %hd\n",dt.date,dt.year);
       break;
       
       case 8:
       printf("%02hhd Aug %hd\n",dt.date,dt.year);
       break;
       
       case 9:
       printf("%02hhd Sep %hd\n",dt.date,dt.year);
       break;
       
       case 10:
       printf("%02hhd Oct %hd\n",dt.date,dt.year);
       break;
       
       case 11:
       printf("%02hhd Nov %hd\n",dt.date,dt.year);
       break;
       
       case 12:
       printf("%02hhd Dec %hd\n",dt.date,dt.year);
       break;
       
       
    }
    
}

