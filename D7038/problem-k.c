/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    char str[500];
    scanf("%[^\n]s", str);
      scanf("%d %d", &a, &b);
    printf("Name: %s\nNIS: %d\nAge: %d\n", str, a, b);
    
    return 0;
}