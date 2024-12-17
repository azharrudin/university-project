#include <stdio.h>
int main(){
	int t,tinggi;
	scanf("%d", &t);
	
	for(int i =0; i<t; i++){
		scanf("%d", &tinggi);
		
		for(int baris =1; baris <=tinggi; baris++){
			for(int spasi=1; spasi <= tinggi-baris; spasi++){
				printf(" ");
			}
			
			for(int bintang = 1; bintang<=2*baris-1; bintang++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
