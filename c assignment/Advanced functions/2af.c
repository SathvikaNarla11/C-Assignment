/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int getLargestNum(int *(num),int count)
{
    int max = num[0];
    for(int i=0;i<count;i++)
    {
        if(max < num[i])
        max= num[i];
    }
    return max;
}

int main()
{
    int count;
    printf("Enter numbers lss than 100 : ");
    scanf("%d",&count);
    
    int arr[100];
    
    for(int i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Greatest number is : %d",getLargestNum(arr,count));
}


