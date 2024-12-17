#include <stdio.h>
int main(){
	int t,a;
	long int b;
	scanf("%d", &t);
	
	long int harga[t];
	for(int i=1; i<=t; i++){
		scanf("%ld", &harga[i]);
	}
	
	int ubah;
	scanf("%d", &ubah);
	
	for(int i=1; i<=ubah; i++){
		scanf("%d %ld", &a, &b);
		harga[a] = b; 
		
		printf("Case #%d:",i);
		for(int j=1; j<=t; j++){
			printf(" %ld", harga[j]);
		}
		printf("\n");
	}
	return 0;
}
