#include <stdio.h>
int main(){
	
	int n1,p1;
	int n2,p2;
	int n3,p3;
	int n4,p4;
	scanf("%d %d", &n1, &p1);
	scanf("%d %d", &n2, &p2);
	scanf("%d %d", &n3, &p3);
	scanf("%d %d", &n4, &p4);
	
	printf("$%.2lf\n", (double)(p1*100)/(100-n1));
	printf("$%.2lf\n", (double)(p2*100)/(100-n2));
	printf("$%.2lf\n", (double)(p3*100)/(100-n3));
	printf("$%.2lf\n", (double)(p4*100)/(100-n4));
	
	return 0;
}
