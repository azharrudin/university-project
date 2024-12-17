#include <stdio.h>
int main(){
	int t,a,b,c,total;
	scanf("%d", &t);
	
	for(int i = 1; i<=t; i++){
		scanf("%d %d",&a, &b );
		
		int total = 0;
		total += a;
		
		 while (a >= b) {
            int exchangedCups = a / b; 
            total += exchangedCups; 
            a = exchangedCups + (a % b); 
        }
			printf("Case #%d: %d\n", i, total );
	
		
	}
	return 0;
}
