#include <stdio.h>
int main(){
	int t,a;
	scanf("%d", &t); getchar();
	
	char skor[100];
	for(int i=1; i<=t; i++){
		scanf("%d", &a); getchar();
		scanf("%s",skor); getchar();
	
	int le=0,be=0;
		for(int j=0; j<a;j++){	
			if(skor[j] == 'L'){
				le++;
			}else if(skor[j] == 'B'){
				be++;
			}

		}
			if(le>be){
				printf("Lili\n");
			}else if(le<be){
				printf("Bibi\n");
			}else{
				printf("None\n");
			}
}
		
	return 0;
}


