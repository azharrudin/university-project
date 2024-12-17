#include <stdio.h>
int main(){
	
	int a,b;
	double diskon;
	scanf("%d %d", &a, &b); getchar();
	
	diskon = ((a-b)/ (double)a) * 100;
	
	printf("%.2lf%%\n", diskon);
	
	return 0;
}
