#include <stdio.h>
int main(){
	int t,b,c,a,klarif=0;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d %d %d", &a, &b, &c); 
		if(b>c){
			klarif+=1;
		}
	}printf("%d\n", klarif);
	return 0;
}
