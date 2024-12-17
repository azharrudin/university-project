#include <stdio.h>
int main(){
	int n,a,b,z;
	
	scanf("%d", &n); getchar();
	if(n==3){
		for(int i=1; i<=n; i++){
			scanf("%d %d", &a, &b); getchar();
			a /= b;
			printf("%d\n", a<<b);
		}
	}
	
		
	return 0;
}
