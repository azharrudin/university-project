#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d", &t);
	
	char nama[100001];
	for(int i=1; i<=t; i++){
		scanf("%s", &nama); 
		int panjang = strlen(nama);
		
		int total[128] = {0};
		int totalHuruf = 0;
		for(int j=0; j<panjang; j++){
			int n = nama[j];
			if(n>='a' && n<='z'){
				if(total[n]==0){
					total[n]+=1;
					totalHuruf+=1;
				}
			}
		}
		
		if(totalHuruf%2 == 0){
			printf("Case #%d: Yay\n",i);
		}else{
			printf("Case #%d: Ewwww\n",i);
		}
		
		
	}
	return 0;
}
