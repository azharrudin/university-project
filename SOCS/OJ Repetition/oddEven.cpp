#include <stdio.h>
int main(){
	unsigned int t,a,b;
	scanf("%u", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%u", &a);
		
		int odd= 0,even=0;
		for(int j=1; j<=a; j++){
			scanf("%u", &b);
			
			if(b%2 == 0){
				even++;
			}else{
				odd++;
			}
		}
	printf("Odd group : %d integer(s).\n", odd);
	printf("Even group : %d integer(s).\n", even);
	
	printf("\n");
	}
	return 0;
}
