/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char arr[6];
    int flag = 0;
    printf("Enter array elements: ");
    for(int i=0;i<6;i++)
    {
        scanf("%hhd",&arr[i]);
    }
    
    for(int i=0;i<6;i++){
        if(arr[i]>35)
        {
            printf("sub %d : %d\t",i+1,arr[i]);
            printf("pass\n");
        }
        else
        {
            printf("sub %d : %d\t",i+1,arr[i]);
            printf("fail\n");  
        }
    }
    
    
    
    for(int i=0;i<6;i++)
    {
        if(arr[i]<35)
        {
            flag = 1;
        
        }
        
    }
    if(flag == 1)
    {
        printf("The student is fail");
    }
    else{
        printf("The student is pass");
    }
}

