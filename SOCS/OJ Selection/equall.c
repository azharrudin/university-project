#include <stdio.h>

int main(){
	unsigned long int a,b,c,d;
	
	scanf("%lu %lu %lu %lu", &a, &b, &c, &d); getchar();
	if(a*b == c-d){
		printf("True\n");
	}else if(a*b != c-d){
		printf("False\n");
	}
	

	return 0;
}
