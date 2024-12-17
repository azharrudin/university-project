#include <stdio.h>
int main(){
	int t,n,m,k,porsiAkhir;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d %d %d",&n ,&m, &k);
		
		porsiAkhir = k;
		for(int j=1; j<=n; j++){
			int x;
			scanf("%d", &x);
			
			if(x > porsiAkhir && x <= m){
				porsiAkhir = x;
			}
		}
		printf("Case #%d: %d\n",i, porsiAkhir);
	}
		
	
	return 0;
}
