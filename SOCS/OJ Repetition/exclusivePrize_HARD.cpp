#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	int n;
	int paket[1000]={0};
	int hadiah = 0;
	
	for(int i=0; i<t;i++){
		scanf("%d", &n); // 1 1 2 2 3 
		paket[n]+=1;
		if(paket[n] > hadiah){
			hadiah = paket[n];
		}
	}
	
	printf("%d\n", hadiah);
	
	return 0;
}


