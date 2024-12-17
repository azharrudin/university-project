#include <stdio.h>
int main(){
	int t,a;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &a);
		
		int nilaiTes[a];
		int nilaiTesMin[a];
		
		for(int j=0; j<a; j++){
			scanf("%d", &nilaiTes[j]);
		}
		
		for(int j=0; j<a; j++){
			scanf("%d", &nilaiTesMin[j]);
		}
		
		int total=0;
		for(int j=0; j<a; j++){
			if(nilaiTes[j] < nilaiTesMin[j]){
				total+=1;	
			}
		}
		
		printf("Case #%d: %d\n", i, total);
		
	}
	return 0;
}
