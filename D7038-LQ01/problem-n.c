/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

**********************************************************************A*********/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    float x;
    scanf("%d %d", &a, &b);
    x = (1.0 - ((float)b/(float)a))*100;
    printf("%.2f%%\n",x);
    return 0;
}