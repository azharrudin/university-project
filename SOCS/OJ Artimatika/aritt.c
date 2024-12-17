#include <stdio.h>

int main(){
	int a1,b1;
	int a2,b2;
	int a3,b3;
	char c1, d1;
	char c2, d2;
	char c3, d3;
	
	scanf("%d %c %d %c", &a1, &c1, &b1, &d1);
	scanf("%d %c %d %c", &a2, &c2, &b2, &d2);
	scanf("%d %c %d %c", &a3, &c3, &b3, &d3);
	printf("%d\n", a1+b1);
	printf("%d\n", a2+b2);
	printf("%d\n", a3+b3);

	
	return 0;
}
