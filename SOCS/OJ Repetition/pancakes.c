#include <stdio.h>
int main(){
	int t,n;
	scanf("%d", &t); 
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		
		printf("Case #%d: ", i);
		int total = 1;
		for(int j=1; j<=n; j++){
			printf(" %d", total);
			total+=j;
		}
		printf("\n");
	}
	return 0;
}


