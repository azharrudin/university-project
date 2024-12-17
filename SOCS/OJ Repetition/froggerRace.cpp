#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		int k;
		scanf("%d", &k);
			
			int loncatan=1;
			int jumlahLoncatan=1;
			int j=2;
			while(loncatan<k){
				loncatan+=j;
				j+=1;
				jumlahLoncatan+=1;
			}
	printf("Case #%d: %d\n",i, jumlahLoncatan);	
	}
	
	return 0;
}
