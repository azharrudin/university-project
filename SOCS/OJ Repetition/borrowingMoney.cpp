#include <stdio.h>
int main(){
	int n,a;
	scanf("%d", &n);
	
	int z=0;
	for(int i=1; i<=n; i++){
		scanf("%d", &a);
		z+=a;
	} printf("%d\n", z);
	return 0;
}
