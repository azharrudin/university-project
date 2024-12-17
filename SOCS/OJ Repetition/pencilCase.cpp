#include <stdio.h>
int main(){
	int t;
	double r,h,luas;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%lf %lf", &r, &h);
		luas = 2*3.14*r*(r+h);
		printf("Case #%d: %.2lf\n",i,luas );
	}
	return 0;
}
