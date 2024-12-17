#include <stdio.h>

int main(){
	unsigned int t,a,b;
	
	scanf("%u", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%u %u", &a ,&b); getchar();
		if(a > b && a!=b){
			printf("Case #%d: Go-Jo\n", i);	
		}else if(a<b && a!=b){
			printf("Case #%d: Bi-Pay\n", i);
		}
	}
	

	return 0;
}
