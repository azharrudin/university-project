#include <stdio.h>
int main(){
	int t,n;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n); getchar();
		int angka[n];
		for(int j=0; j<n; j++){
			scanf("%d", &angka[j]); getchar();
		}
		
		printf("Case #%d:", i);
		for(int j=n-1; j>=0; j--){
			printf(" %d", angka[j]);
		}
		printf("\n");
	}
	return 0;
}
