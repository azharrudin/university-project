#include <stdio.h>

int main(){
	double a,b,c, d, hitung;
	int t;
	
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d); getchar();
		hitung = 2*(a/1) + 4*(b/2) + 4*(c/3) + 2*(d/4);
		printf("%.2lf\n", hitung);
		
}	
	return 0;
}
