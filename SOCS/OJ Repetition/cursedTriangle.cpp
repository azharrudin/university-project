#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	
	for(int i=1; i<=a; i++){
		for(int alas=1; alas<=b; alas++){
			
			for(int spasi=1; spasi<= b-alas; spasi++){
				printf(" ");
			}
			for(int tinggi=1; tinggi<=alas; tinggi++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}


