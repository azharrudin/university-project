#include <stdio.h>
int main(){
	int t,a,b;
	char bingkai[50][50];
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d %d", &a, &b);
		
		printf("Case #%d:\n", i);
		for(int j=1; j<=a;j++){
			for(int k=1; k<=b; k++){
				if(j==1 || k==1|| j==a || k==b){
					
					printf("#");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}	
	}
	
	
	
	return 0;
}
