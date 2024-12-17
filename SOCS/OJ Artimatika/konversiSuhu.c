#include <stdio.h>
int main(){
	
	double x,y,z;
	 
	int t;
	scanf("%d", &t);
	
	if(t==3){
		scanf("%lf", &x);
		scanf("%lf", &y);
		scanf("%lf", &z);
		
		printf("%.2lf %.2lf %.2lf\n", 0.8*x, 1.8*x+32, x+273); 	
		printf("%.2lf %.2lf %.2lf\n", 0.8*y, 1.8*y+32, y+273); 	
		printf("%.2lf %.2lf %.2lf\n", 0.8*z, 1.8*z+32, z+273); 	
	}

	return 0;
}
