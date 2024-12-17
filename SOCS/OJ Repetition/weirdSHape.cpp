#include <stdio.h>
int main(){
	unsigned int t,a;
	scanf("%u", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%u", &a);
		
		if(a&2 != 0){
			for(int baris = 1; baris<=a; baris++){
			for(int kolom =1; kolom<=a; kolom++){
				if(baris == 1 || kolom ==1 || baris == a|| kolom == a || baris == kolom || kolom == a-baris+1){
					printf("*");
				}else{
					printf(" ");
				}
				
			}
			printf("\n");
		}
		
		}
		
		printf("\n");
	}
	return 0;
}
