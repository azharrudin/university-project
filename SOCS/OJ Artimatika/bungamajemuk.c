#include <stdio.h>
#include <math.h>

int main(){
	int a;
	double b;
	double bunga;
	scanf("%d %lf", &a, &b);
	
	bunga = a* (pow((1 + b/100), 3));
	
	printf("%.2lf\n", bunga);
	
	return 0;
}
