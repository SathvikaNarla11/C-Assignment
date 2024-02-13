/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void getTotalAvgMaxMin(int *marks, int *tot, int *avg, int *max, int *min);
void getTotalAvgMaxMin(int *marks, int *tot, int *avg, int *max, int *min)
{
    int sum = 0;
    for(int i=0;i<6;i++)
    {
        sum = sum + marks[i];
    }
    *tot = sum;
    *avg = *tot/6;
    *max = marks[0];
    for(int i=0;i<6;i++)
    {
        if(marks[0]>marks[i])
        *max = marks[i];
    }
    *min = marks[0];
    for(int i=0;i<6;i++)
    {
        if(marks[0] < marks[i])
        *min = marks[i];
    }
}
int main()
{
    int arr[6];
    int tm,am,mam,mim;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    getTotalAvgMaxMin(arr,&tm,&am,&mam,&mim);
    
    printf("Total Marks : %d\n",tm);
    printf("Average Marks : %d\n",am);
    printf("Max Marks : %d\n",mam);
    printf("Min Marks : %d\n",mim);
}

