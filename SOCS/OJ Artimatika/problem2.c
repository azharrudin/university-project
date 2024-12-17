#include <stdio.h>

int main(){
	int Ph,M,Pu;
	
	scanf("%d %d %d", &Ph, &M, &Pu);
	printf("%.2lf\n", (double)(0.2*Ph) + (double)(0.3*M) + (double)(0.5*Pu));
	
	
	return 0;
}
