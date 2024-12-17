#include <stdio.h>
int main(){
	int a,b,z=0;
	
	scanf("%d", &a); getchar();
	
	for(int i = 1; i <= a; i++){
		scanf("%d", &b); getchar();
		z = (z + b) % 30000;
		
		if(z==9){
			z=21;
		}else if(z==33){
			z=42;
		}else if(z==76){
			z=92;
		}else if(z==53){
			z=37;
		}else if(z==80){
			z=59;
		}else if(z==97){
			z=88;
		}
	}
	
	printf("%d\n", z);
	
	return 0;
}
