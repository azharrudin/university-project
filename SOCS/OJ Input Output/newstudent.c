#include <stdio.h>

int main() {
    char N[101];
    char A[101];
    int U;
    
	scanf("%[^\n]", &N); getchar(); 
    scanf("%s %d", &A, &U); getchar();
	
    printf("Name: %s\nNIS: %s\nAge: %d\n", N,A,U);
   
    
    return 0;
}
