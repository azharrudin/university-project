#include <stdio.h>
int main(){
	int t,n, tinggiMin;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		
		int rumah[n];
		for(int j=0; j<n; j++){
			scanf("%d", &rumah[j]);
		}
		
		tinggiMin = rumah[1]-rumah[0];
		if(tinggiMin<0){
			tinggiMin = -tinggiMin;
		}
		
		//loop perbandingan
		int selisihTinggi;
		for(int selisih=1; selisih<n-1; selisih++){//n-1 karena jika punya 5 rumah maka (1:2 , 2:3 , 3:4 , 4:5)
			selisihTinggi = rumah[selisih+1]- rumah[selisih];
			if(selisihTinggi<0){
				selisihTinggi = -selisihTinggi;
			}
			
				if(selisihTinggi<tinggiMin){
			tinggiMin = selisihTinggi;
			}
		}
		
	
		printf("Case #%d: %d\n", i, tinggiMin);
	}
	return 0; 
}
