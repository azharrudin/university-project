#include <stdio.h>

int main(){
	unsigned int t,a,b;
	
	scanf("%u", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%u %u", &a ,&b); getchar();
		if(a % 2 != 0 && b%2 != 0){
			printf("Case #%d: Need more frogs\n", i);	
		}else{
			printf("Case #%d: Party time!\n", i);
		}
	}
	

	return 0;
}
