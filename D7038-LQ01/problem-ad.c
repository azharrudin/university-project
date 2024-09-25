/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
  int a,b,c;
  float t1,t2,t3;
  scanf("%d %d %d", &a, &b, &c);
  t1 = 0.20 * a;
  t2 = 0.30 * b;
  t3 = 0.50 * c;
  printf("%.2f\n", t1+t2+t3);
    return 0;
}
