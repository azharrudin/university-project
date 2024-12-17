#include <stdio.h>
int main(){
	int t,nomor;
	char jawaban[101];
	char kunci[101];
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &nomor);
		
		for(int j=0; j<nomor; j++){
			scanf(" %c", &jawaban[j]);
		}
		
		for(int j=0; j<nomor; j++){
			scanf(" %c", &kunci[j]);
		}
		
		int poin = 0;
		for(int j=0; j<nomor; j++){
			if(kunci[j] == jawaban[j]){
				poin += 1;
			}
		}
		
		int nilai = (poin*100)/nomor;
		
		printf("Case #%d: %d\n", i, nilai);	
	}
	return 0;
}
