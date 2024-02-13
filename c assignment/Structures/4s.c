/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio_ext.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int id;
    char name[40];
    long long int mobile;
    struct Date dob;
};

int main()
{
    struct Student s1[2];
    
    for(int i=1;i<=2;i++)
    {
        printf("Enter id: ");
        scanf("%d",&s1[i].id);
        printf("Enter Name: ");
        __fpurge(stdin);
        scanf("%[^\n]s",s1[i].name);
        printf("Enter mobile: ");
        scanf("%lld",&s1[i].mobile);
         printf("Enter DOB: ");
        scanf("%d %d %d",&s1[i].dob.day,&s1[i].dob.month,&s1[i].dob.year);
        
        // printf("S.No\t\t\t\tName\t\t\t\tMobile\t\t\tDate of Birth\n");
        // printf("---- -------- -------- --------\n");
        
        // printf()
    }
    printf("S.No\tName\tMobile\t\tDate of Birth\n");
    printf("---- --------\t--------\t--------\n");
    for(int i=1;i<=2;i++)
    {  
        printf(" %d\t%s \t%lld \t%d/%d/%d\n",s1[i].id,s1[i].name,s1[i].mobile,s1[i].dob.day,s1[i].dob.month,s1[i].dob.year);

    }
}














