#include <stdio.h>

int main(){
	int n;
	unsigned long int a = 100;
	unsigned long int b = 50;
	unsigned long int c = 0;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		c+=a+b*i;
	}printf("%lu\n", c);
	
	return 0;
}
