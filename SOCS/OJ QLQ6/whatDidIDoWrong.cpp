#include <stdio.h>
int main(){
	int t,n;
	scanf("%d", &t);
	
	int resep[100];
	int bahan[100];
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		for(int j=0; j<n; j++){
			scanf("%d", &resep[j]);
		}
		
		for(int j=0; j<n; j++){
			scanf("%d", &bahan[j]);
		}
		
		printf("Case #%d:",i);
		for(int j=0; j<n; j++){
			int selisih = resep[j]-bahan[j];
			printf(" %d", selisih);
		}
		printf("\n");
		
	}
	return 0;
}
