#include <stdio.h>

int main(){
	double l,b,h;
	
	scanf("%lf %lf %lf", &l, &b, &h);
	printf("%.3lf\n", (b*h) + 3*(l*b));
	
	return 0;
}
