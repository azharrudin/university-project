#include <stdio.h>
int main(){
	int t,a,z=0;
	scanf("%d", &t);
	
	for(int i =1; i<=t; i++){
		scanf("%d", &a);
		z+=a;
	}
	printf("%d\n", z);
	return 0;
}
