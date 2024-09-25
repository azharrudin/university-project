/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int a, b, a1,b1,a2,b2;
    scanf("%d + %d =\n", &a, &b);
    scanf("%d + %d =\n", &a1, &b1);
    scanf("%d + %d =", &a2, &b2);
    printf("%d\n%d\n%d\n", (a+b), (a1+b1), (a2+b2));
    
    
    return 0;
}