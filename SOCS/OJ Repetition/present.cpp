#include <stdio.h>
int main(){
	int t,nilai;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		int jumlahMurid;
		scanf("%d", &jumlahMurid);
		
		int nilaiMax=-1;
		int hadiah=1;
		for(int j=1; j<=jumlahMurid; j++){
			scanf("%d", &nilai);
			
			if(nilai>nilaiMax){
				nilaiMax = nilai;
			}else if(nilai==nilaiMax){
				hadiah++;
			}
		}
		printf("Case #%d: %d\n", i, hadiah);
	}
	return 0;
}
