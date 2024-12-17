#include <stdio.h>
int main(){
	int t,n;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		
		printf("Case #%d: ", i);
		for(int j=1; j<=n; j++){
			printf("%c", j+96);
		}
		printf("\n");
	}
	return 0;
}
