#include <stdio.h>
int main(){
	int t,a,b;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &a);
		
		long long z = 0;
		for(int j =1; j<=a; j++){
			scanf("%d", &b);
			z+=b;
		}
		printf("Case #%d: %lld\n", i, z);
	}
	return 0;
}
