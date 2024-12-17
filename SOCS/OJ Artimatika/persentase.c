#include <stdio.h>

int main(){
	int a1,b1,t;
	int a2,b2;
	int a3,b3;
	
	scanf("%d", &t);
	
	if(t==3){
	
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);
	scanf("%d %d", &a3, &b3);
	
	
	printf("%.2lf\n", (double)b1*a1/100);	
	printf("%.2lf\n", (double)b2*a2/100);	
	printf("%.2lf\n", (double)b3*a3/100);	
	}

	
	
	return 0;
}
