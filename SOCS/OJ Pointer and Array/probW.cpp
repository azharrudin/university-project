#include <stdio.h>
int main(){
	int t,num;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &num); 
		
		int bil[200];
		for(int j=0; j<num; j++){
			scanf("%d", &bil[j]); // 1 2 3 4 5 
		}
		
		//bubble sort
		for (int j = 0; j < num - 1; j++) {
            for (int k = 0; k < num - j - 1; k++) {
                if (bil[k] > bil[k + 1]) {
                    int temp = bil[k];
                    bil[k] = bil[k + 1];
                    bil[k + 1] = temp;
                }
            }
        }
		
		int plus;
		int check[200]={0};
		int factors=0;
		for(int j=0; j<num-1; j++){
			for(int k=j+1; k<num; k++){
				plus = bil[j] + bil[k];
				
				for(int a=k+1; a<num; a++){
					if(plus == bil[a]){ // 3 == 3
						if(check[plus] == 0){ // check[3] == 0
							check[plus] = 1; // check[3] = 1
							factors++; // faktor+1 <agar tidak double>
						}	
					}
				}
			}
		}
		
		printf("Case #%d: %d\n",i ,factors);
	}
	return 0;
}
