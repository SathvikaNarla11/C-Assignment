/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int getLargestNum(int *nums, int count)
{
    int max = nums[0];
    for(int i=0;i<count;i++)
    {
        if(nums[i]>max)
        {
            max = nums[i];
        }
    }
    printf("Maximum number is : %d\n",max);
    return max;
}

int main()
{
   int arr[5];
   for(int i=0;i<5;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("%d",getLargestNum(arr, 5));
   
}


