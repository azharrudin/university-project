#include <stdio.h>
int main(){
	
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		int n;
		scanf("%d", &n);
		
		long long int arr[100][100];
		for(int j=0;j<n;j++){
			for(int k=0; k<n; k++){
				scanf("%lld", &arr[j][k]);
			}
		}
		
		long long int hasil[100] = {0};
		for(int j=0;j<n;j++){
			for(int k=0; k<n; k++){
				hasil[j] += arr[k][j];
			}
		}
		
		printf("Case #%d: ",i);
		for(int j=0;j<n;j++){
				printf("%lld%c", hasil[j], ((j==n-1)?'\n':' '));
		}	
	}
	return 0;
}
