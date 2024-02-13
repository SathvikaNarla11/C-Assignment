/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void getTotalAvgMaxMin(int *marks, int *result)
{
    int sum =0;
    for(int i=0;i<6;i++)
    {
        sum = sum+marks[i];
    }
    int avg = sum/6;
    int min=marks[0],max=marks[0];
    for(int i=0;i<6;i++)
    {
        if(min < marks[i])
        min = marks[i];
    }
    for(int i=0;i<6;i++)
    {
        if(max > marks[i])
        max > marks[i];
    }
    
    result[0] = sum;
    result[1] = avg;
    result[2] = min;
    result[3] = max;
}
int main()
{
    int arr[6];
    int res[4];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    getTotalAvgMaxMin(arr,res);
    
    printf("Sum : %d\n",res[0]);
    printf("Avg: %d\n",res[1]);
    printf("Min : %d\n",res[2]);
    printf("Max : %d",res[3]);
}

