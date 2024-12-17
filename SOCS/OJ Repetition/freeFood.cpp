#include <stdio.h>
int main(){
	int t,a,b,c,total;
	scanf("%d", &t);
	
	for(int i = 1; i<=t; i++){
		scanf("%d %d",&a, &b );
		
		int z=0;
		for(int j = 1; j<=a; j++){
			scanf("%d", &c);
			z+=c;
		}
		
		if(z>b){
			printf("Case #%d: Wash dishes\n", i);
		}else{
			printf("Case #%d: No worries\n", i);
		}
	}
	return 0;
}
