#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	
	char string[1000];
	for(int i=1; i<=t; i++){
		scanf("%s", string);
		
		int panjang = strlen(string);
		
		printf("Case #%d : ",i);
		for(int j=panjang-1; j>=0; j--){
			printf("%c", string[j]);
		}
		printf("\n");
		
	}
}
