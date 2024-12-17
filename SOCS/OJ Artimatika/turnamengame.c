#include <stdio.h>
#include <math.h>

int main(){
	int n;
	unsigned long int c;
	
	scanf("%d", &n);
	c = pow(2,n)-1;
	
	printf("%lu\n", c);
	
	return 0;
}
