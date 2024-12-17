#include <stdio.h>

int main(){
	double a,b,c, d;
	double hitung;
	
	for(int i=1; i<=3; i++){
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	hitung = 2*(a/1) + 4*(b/2) + 6*(c/3) + 4*(d/4);
	printf("%.2lf\n", hitung);
	}
	
	
	return 0;
}
