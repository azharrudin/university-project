/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

**********************************************************************A*********/
#include <stdio.h>
int main()
{
    int a,b,row1,row2,row3,row4;
  
    scanf("%d %d", &a, &b);
    row1 = a*b;
    scanf("%d %d", &a, &b);
    row2 = a*b;
    scanf("%d %d", &a, &b);
    row3 = a*b;
    scanf("%d %d", &a, &b);
    row4 = a*b;
    printf("%d\n%d\n%d\n%d\n",row1, row2,row3,row4);
    return 0;
}
