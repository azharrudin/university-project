#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	for(int i =1; i<=t; i++){
		long long int n;
		scanf("%lld", &n);
		
		long long int a[n];
		for(int j=0; j<n;j++){
			scanf("%lld", &a[j]);
		}
		
		long long int max1=a[0], max2=-1;

		for(int j=1; j<n;j++){
				if(a[j] >= max1){
					max2 = max1;
					max1 = a[j];
				}else if(a[j] > max2){
					max2 = a[j];
				}
		}
		long long int total = max1 + max2;
		printf("Case #%d: %lld\n", i, total);
	}
	return 0;
}
