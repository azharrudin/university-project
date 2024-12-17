#include <stdio.h>
int main(){
	int t,n,m;
	scanf("%d", &t);

	long long int coklat[1000];
	for(int i=1; i<=t; i++){
		scanf("%d %d", &n, &m);
		
		long long int total=0;
		for(int j=1; j<=n; j++){
			int max=0;
			for(int k=1; k<=m; k++){
				scanf("%lld", &coklat[k]);
				
				if(coklat[k] > max){
				max = coklat[k];
				}
			}
			total+=max;
		}
		printf("Case #%d: %lld\n", i, total);
	}
	return 0;
}
