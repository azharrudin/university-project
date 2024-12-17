#include <stdio.h>
int main(){
	int t,x;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &x);
		
		printf("Case #%d:\n", i);
		for(int j=1; j<=x; j++){
			if(j%3 == 0 && j%15 != 0 || j%5 == 0 && j%15 != 0){
				printf("%d Jojo\n", j);
			}else{
				printf("%d Lili\n", j);
			}
		}
	}
	
	return 0;
}
