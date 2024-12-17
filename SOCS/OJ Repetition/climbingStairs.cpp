#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t); getchar();
	
	int sebelum=0,sekarang;
	for(int i=1; i<=t; i++){
		scanf("%d", &sekarang); getchar();
		
		if(sekarang<=sebelum){
			printf("%d ", sebelum);
			sebelum = sekarang;
		}else {
			sebelum = sekarang;
		}
		
		if(i==t){
			printf("%d\n",sekarang);
		}
	}	
	
	return 0;
}
