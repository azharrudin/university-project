#include <stdio.h>
int main(){
	int t,a,b;
	int totalBotol;
	int totalBotolKosong;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d %d", &a, &b);
		totalBotol=a;
		totalBotolKosong = a;
		while(totalBotolKosong >= b){
			totalBotolKosong = (totalBotolKosong-b)+1;
			totalBotol+=1;
		}
		 printf("Case #%d: %d\n", i, totalBotol);
	}
	return 0;
}
