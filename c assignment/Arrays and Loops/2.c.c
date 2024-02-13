/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int smallest= arr[0];
    int largest = arr[0];
    
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        // if(arr[i]<smallest)
        // {
        //     smallest = arr[i];
        // }
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Sum : %d\n",sum);
    printf("Average : %d\n", sum/5);
    printf("Smallest : %d\n",smallest);
    printf("Largest : %d\n",largest);
}

