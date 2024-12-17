#include <stdio.h>
int main(){
	int t,x;
	scanf("%d", &t);
	
	int arr[100][100];
	for(int i=1; i<=t; i++){
		scanf("%d", &x);
		for(int b=0; b<x; b++){
			for(int k=0; k<x; k++){
				scanf("%d", &arr[b][k]);
			}
		}
		
		int sum[x];
		for(int b=0; b<x;b++){
			sum[b]=0;			
			for(int k=0; k<x;k++){
				sum[b] += arr[k][b];
			}
		}
		
		printf("Case #%d: ",i);
		for(int j=0; j<x; j++){
			printf("%d%c",sum[j], ((j==x-1)?'\n':' '));
		}
	}

	return 0;
}
