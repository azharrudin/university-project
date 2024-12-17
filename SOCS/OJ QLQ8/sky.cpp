#include <stdio.h>
int main(){
	
	int n;
	scanf("%d", &n); getchar();
	
	char photo[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf(" %c", &photo[i][j]); 
		}
	}
	
	for(int i=n-1; i>=0; i--){
		for(int j=n-1; j>=0; j--){
			printf("%c", photo[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
