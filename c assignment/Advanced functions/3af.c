/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int getLargestNum(int num[],int count)
{
    int max =num[0];
   for(int i=0;i<count;i++)
   {
       
       if(max< num[i])
       {
           max = num[i];
       }
   }
   return max;
}

int main()
{
    int arr[100],count;
    printf("Enter the number of numbers you ant to enter : \n");
    scanf("%d",&count);
    
    int *p;
    p = (int *)malloc(count * sizeof(int));
    
    for(int i=0;i<count;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("%d", getLargestNum(p, count));
    
}

