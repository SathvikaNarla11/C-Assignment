/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    short num;
    int bit_position;

    printf("Enter hexadecimal number: ");
    scanf("%hx", &num);

    printf("Enter the bit position:");
    scanf("%d", &bit_position);

    short m = (1 << 4) - 1;  
    short e = (num >> bit_position) & m;
    printf("Value present in the 4 bits starting from bit position %d: %hx\n", m, e);

    return 0;
}

