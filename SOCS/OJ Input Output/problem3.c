#include <stdio.h>

int main(){
	
	int M, N;
	scanf("%d", &N);
	scanf("%d", &M);

	
	while(M>0){
		printf("%d\n", N);
		N++;
		M--;
	}
	
	return 0;
}

