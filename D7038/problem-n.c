/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int h1,h2,a1,a2;
    double t1,t2;
    char str_a[100];
    char str_b[100];
    scanf("%s %lf %d %s %lf %d", str_a, &t1, &a1, str_b, &t2, &a2 );
    printf("Name 1: %s\nHeight 1: %.2f\nAge 1: %d\nName 2: %s\nHeight 2: %.2f\nAge 2: %d\n", str_a, t1, a1, str_b, t2, a2);
    
    return 0;
}