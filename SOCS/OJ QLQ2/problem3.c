#include <stdio.h>
int main(){
	
	double t;
	double  a1, b1;
	double  a2, b2;
	double  a3, b3;
	
	scanf("%lf", &t);
	
	if(t==3){
	scanf("%lf %lf", &a1 ,&b1);
	scanf("%lf %lf", &a2 ,&b2);
	scanf("%lf %lf", &a3, &b3);
		
	printf("%.2lf\n", (a1*b1)/360);
	printf("%.2lf\n", (a2*b2)/360);
	printf("%.2lf\n", (a3*b3)/360);
	
	}

	return 0;
}
